/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 00:00:37 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 14:57:11 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_lst.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *) malloc(1 * (int) sizeof(t_list));
	if (!lst)
		return (NULL);
	lst -> content = content;
	lst -> next = NULL;
	return (lst);
}
