/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:28:10 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:20:06 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_string.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cat_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (dstsize + src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	if (dstsize - dst_len - 1 < src_len)
		cat_len = dstsize - dst_len - 1;
	else
		cat_len = src_len;
	ft_memcpy(dst + dst_len, src, cat_len);
	dst[dst_len + cat_len] = '\0';
	return (dst_len + src_len);
}
