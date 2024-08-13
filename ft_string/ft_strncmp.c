/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:43:06 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:22:02 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_string.h" 

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') \
			&& (unsigned char)s1[i] == (unsigned char)s2[i] \
			&& i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
