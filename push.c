/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:42:50 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/26 11:43:11 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void push(t_list **lst, t_list **second, char *var)
{
	t_list *tmp;

	if (!lst || !second)
		return;
	tmp = *lst;
	*lst = (*lst)->next;
	if (!*lst)
	{
		tmp->next = NULL;
		*second = tmp;
	}
	else
	{
		tmp->next = *second;
		*second = tmp;
	}
	ft_printf("%s", var);
}
