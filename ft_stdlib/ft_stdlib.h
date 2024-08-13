/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:29:14 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:37:49 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

#include <stdint.h>
#include <stdlib.h>
#include "../ft_ctype/ft_ctype.h"
#include "../ft_string/ft_string.h"

int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);

#endif
