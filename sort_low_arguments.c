/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:07:33 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 08:07:37 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	two_arguments(t_list **lst)
{
	if (!*lst)
		return ;
	if (!is_order(*lst))
		return ;
	if (*((*lst)->content) > *((*lst)->next->content))
		swap(*lst, "sa\n");
	two_arguments(lst);
}

void	three_arguments(t_list **list)
{
	if (!*list)
		return ;
	if (!is_order(*list))
		return ;
	if (*((*list)->content) > *((*list)->next->next->content))
		rotate(list, "ra\n");
	if (*((*list)->content) > *((*list)->next->content))
		swap(*list, "sa\n");
	if (*((*list)->next->content) > *((*list)->next->next->content))
		reverse(list, "rra\n");
	three_arguments(list);
}

void	four_arguments(t_list **lst, t_list **second)
{
	int		n;

	if (!*lst)
		return ;
	n = mix_number(lst, MIN);
	if (!is_order(*lst))
		return ;
	if ((*(*lst)->content) == n)
	{
		push(lst, second, "pb\n");
		three_arguments(lst);
		push(second, lst, "pa\n");
		return ;
	}
	rotate(lst, "ra\n");
	four_arguments(lst, second);
}

void	five_arguments(t_list **lst, t_list **second)
{
	t_list	*first;
	int		n;

	if (!*lst)
		return ;
	first = *lst;
	n = mix_number(lst, MIN);
	if (!is_order(*lst))
		return ;
	if (*first->content == n)
	{
		push(lst, second, "pb\n");
		four_arguments(lst, second);
		push(second, lst, "pa\n");
		return ;
	}
	else
		rotate(lst, "ra\n");
	five_arguments(lst, second);
}

int	mix_number(t_list **list, int n)
{
	t_list	*current;
	t_list	*iter;
	int		c;
	int		p;

	current = *list;
	iter = NULL;
	p = *current->content;
	c = 0;
	while (current)
	{
		iter = current->next;
		while (iter)
		{
			c = *iter->content;
			if (n && p < c)
				p = c;
			if (!n && p > c)
				p = c;
			iter = iter->next;
		}
		current = current->next;
	}
	return (p);
}
