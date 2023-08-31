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
#include "libft/libft.h"
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
	if (!is_order(*list))
		return ;
	else if ((*((*list)->content) > *((*list)->next->content))
		&& ((*((*list)->next->content) < *((*list)->next->next->content))
			&& (*((*list)->content) > *((*list)->next->next->content))))
		rotate(list, "ra\n");
	else if ((*((*list)->content) > *((*list)->next->content))
		&& (*((*list)->content) > *((*list)->next->next->content)))
	{
		swap(*list, "sa\n");
		reverse(list, "rra\n");
	}
	else if ((*((*list)->next->content) > *((*list)->next->next->content))
		&& (*((*list)->content) < *((*list)->next->next->content)))
	{
		swap(*list, "sa\n");
		rotate(list, "ra\n");
	}
	else if (*((*list)->content) > *((*list)->next->content))
		swap(*list, "sa\n");
	else if (*((*list)->next->content) > *((*list)->next->next->content))
		reverse(list, "rra\n");
	else if (*((*list)->content) > *((*list)->next->next->content))
		rotate(list, "ra\n");
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

void	aux_fivearguments(t_list **lst, t_list **second)
{
	t_list	*first;
	t_list	*last;

	first = *lst;
	last = lstlast(*lst);
	if (*first->content == mix_number(lst, MIN))
	{
		push(lst, second, "pb\n");
		four_arguments(lst, second);
		push(second, lst, "pa\n");
		return ;
	}
	else if (*last->content == mix_number(lst, MIN))
	{
		reverse(lst, "rra\n");
		push(lst, second, "pb\n");
		four_arguments(lst, second);
		push(second, lst, "pa\n");
		return ;
	}
	else
	{
		rotate(lst, "ra\n");
		five_arguments(lst, second);
	}
}

void	five_arguments(t_list **lst, t_list **second)
{
	if (!*lst)
		return ;
	if (!is_order(*lst))
		return ;
	aux_fivearguments(lst, second);
}
