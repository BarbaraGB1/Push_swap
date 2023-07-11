/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_arguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:08:02 by osadia            #+#    #+#             */
/*   Updated: 2023/07/10 09:08:08 by osadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	four_arguments(t_list **lst, t_list **second)
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
		three_arguments(lst);
		push(second, lst, "pa\n");
	}
	else
		rotate(lst, "rra\n");
	four_arguments(lst, second);
}
