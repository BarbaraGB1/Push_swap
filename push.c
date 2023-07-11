/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:42:50 by bargarci          #+#    #+#             */
/*   Updated: 2023/07/10 09:10:35 by osadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push(t_list **lst, t_list **second, char *var)
{
	t_list *tmp;

	if (!lst)
		return;
	tmp = *lst;
	*lst = (*lst)->next;
	if (!*second)
	{
		*second = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *second;
		*second = tmp;
	}
	ft_printf("%s", var);
}
