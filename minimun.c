/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:10:13 by osadia            #+#    #+#             */
/*   Updated: 2023/07/10 09:10:17 by osadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

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
			//ft_printf("%i", p);
		}
		current = current->next;
	}
	return (p);
}
