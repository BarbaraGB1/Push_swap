/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movs_single.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:48:58 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 09:49:03 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	swap(t_list *lst, char *var)
{
	int	*temp;

	if (ft_lstsize(lst) <= 1)
		return ;
	else
	{
		temp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = temp;
	}
	if (var)
		ft_printf("%s", var);
}

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

void	reverse(t_list **lst, char *var)
{
	t_list	*temp;
	t_list	*nodotemp;

	if (!*lst || ft_lstsize(*lst) <= 1)
		return ;
	temp = *lst;
	while (temp->next && temp->next->next)
		temp = temp->next;
	nodotemp = temp->next;
	temp->next = NULL;
	nodotemp->next = *lst;
	*lst = nodotemp;
	if (var)
		ft_printf("%s", var);
}

void	push(t_list **lst, t_list **second, char *var)
{
	t_list	*tmp;

	if (!lst)
		return ;
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
