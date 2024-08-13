/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:18:57 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:21:39 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_string.h" 

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	char	*res;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	res = (char *)malloc((n + 1) * (int) sizeof(char));
	if (!res)
		return (NULL);
	res[n] = '\0';
	while (0 < n--)
		res[n] = f(n, s[n]);
	return (res);
}
