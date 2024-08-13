/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:18:21 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:16:08 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_string.h" 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (!dst && !src)
		return (NULL);
	tmp = (unsigned char *) dst;
	while (tmp < (unsigned char *)dst + n)
		*tmp++ = *(unsigned char *)src++;
	return (dst);
}
