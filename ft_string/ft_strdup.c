/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:59:38 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:18:43 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_string.h" 

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * (size_t) sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	while (0 < len--)
		res[len] = s[len];
	return (res);
}
