/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakaaza <nakaaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:08:20 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/20 19:51:49 by nakaaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

char static	*ft_read_line(int fd, char *buff, char *s);
char static	*ft_get_line(int fd, char *buff, char *s);

char	*get_next_line(int fd)
{
	static char	buff_lst[FD_MAX_COUNT][BUFFER_SIZE + 1] = {{0}};

	if (fd < 0)
		return (NULL);
	return (ft_read_line(fd, buff_lst[fd], ""));
}

char static	*ft_read_line(int fd, char *buff, char *s)
{
	ssize_t		bytes_read;

	if (!buff)
		return (NULL);
	if (ft_strlen(buff) == 0)
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		if (bytes_read == 0)
		{
			if (ft_strlen(buff) == 0 && ft_strlen(s) == 0)
				return (NULL);
			return (ft_strjoin(s, buff));
		}
		else if (bytes_read == -1)
		{
			ft_bzero(buff, BUFFER_SIZE + 1);
			return (NULL);
		}
	}
	return (ft_get_line(fd, buff, s));
}

char static	*ft_get_line(int fd, char *buff, char *s)
{
	char		*tmp;
	char		*res;
	char		*eol;

	eol = ft_strchr(buff, '\n');
	if (!eol)
	{
		tmp = ft_strjoin(s, buff);
		ft_bzero(buff, BUFFER_SIZE + 1);
		res = ft_read_line(fd, buff, tmp);
	}
	else
	{
		tmp = (char *)malloc((eol - buff + 2) * sizeof(char));
		ft_memcpy(tmp, buff, eol - buff + 1);
		tmp[eol - buff + 1] = '\0';
		ft_memcpy(buff, eol + 1, ft_strlen(buff) - (eol - buff));
		ft_bzero(buff + ft_strlen(buff), BUFFER_SIZE - ft_strlen(buff));
		res = ft_strjoin(s, tmp);
	}
	free(tmp);
	return (res);
}
