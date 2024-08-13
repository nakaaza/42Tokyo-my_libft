/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:06:57 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:24:28 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_string.h" 

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (s1[start] == '\0')
		len = 0;
	else
		len = end - start + 1;
	res = (char *)malloc((len + 1) * (int)(sizeof(char)));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1 + start, len);
	res[len] = '\0';
	return (res);
}
