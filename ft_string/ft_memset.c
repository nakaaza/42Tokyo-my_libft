/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:06:37 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:17:06 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_string.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (0 < len--)
		tmp[len] = (unsigned char) c;
	return (b);
}
