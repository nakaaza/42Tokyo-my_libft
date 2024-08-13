/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:58:01 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:02:05 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_FD_H
# define FT_PUT_FD_H

# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
