/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:45:36 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 07:40:15 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rotate(t_list **lst, char *var)
{
	t_list	*tmp;
	t_list	*nodotmp;

	nodotmp = NULL;
	tmp = NULL;
	if (!lst || ft_lstsize(*lst) <= 1)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	nodotmp = ft_lstlast(*lst);
	nodotmp->next = tmp;
	nodotmp->next->next = NULL;
	if (var)
		ft_printf("%s", var);
}

void	rotate_rr(t_list **lst, t_list **second, char *var)
{
	rotate(lst, 0);
	rotate(second, 0);
	ft_printf("%s", var);
}
