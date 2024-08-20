/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakaaza <nakaaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:08:57 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/20 19:50:50 by nakaaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "../ft_string/ft_string.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_MAX_COUNT
#  define FD_MAX_COUNT 1024
# endif

typedef struct s_buff
{
	int		fd;
	char	buff[BUFFER_SIZE + 1];
}				t_buff;

// get_next_line.c
char	*get_next_line(int fd);

#endif