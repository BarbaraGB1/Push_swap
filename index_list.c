/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:33:28 by osadia            #+#    #+#             */
/*   Updated: 2023/08/25 11:33:59 by osadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

t_list	*find_min(t_list **list)
{
	t_list	*min;
	int		start;
	t_list	*current;

	min = NULL;
	start = 0;
	current = *list;
	while (current)
	{
		if (current->index == -1 && ((start == 0) || (*current->content < *min->content)))
		{
			start = 1;
			min = current;
		}
		current = current->next;
	}
	return (min);
}

void	put_index(t_list **list)
{
	int		i;
	t_list	*index_node;

	i = 0;
	index_node = find_min(list);
	while (index_node)
	{
		index_node->index = i;
		index_node = find_min(list);
		i++;
	}
}
