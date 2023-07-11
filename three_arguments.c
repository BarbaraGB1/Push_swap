/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:09:34 by osadia            #+#    #+#             */
/*   Updated: 2023/07/10 09:09:43 by osadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf/ft_printf.h"
#include "push_swap.h"

void	three_arguments(t_list **list)
{
	t_list	*current;

	current = NULL;
	if (!*list)
		return ;
	current = (*list)->next;
	if (!is_order(*list))
		return ;
	if (*((*list)->content) > *((*list)->next->content))
		rotate(list, "ra\n");
	if (*((*list)->content) > *current->content)
		swap(*list, "sa\n");
	if (*current->content > *current->next->content)
		reverse(list, "rra\n");
	three_arguments(list);
}
