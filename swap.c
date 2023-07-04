/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:46:13 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/26 11:46:19 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void swap(t_list *lst, char *var)
{
	int *temp;

	if (ft_lstsize(lst) <= 1)
		return;
	else
	{
		temp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = temp;
	}
	if (var)
		ft_printf("%s", var);
}

void swap_ss(t_list *lst, t_list *second, char *var)
{
	swap(lst, 0);
	swap(second, 0);
	ft_printf("%s", var);
}
