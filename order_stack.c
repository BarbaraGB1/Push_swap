/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:56:56 by osadia            #+#    #+#             */
/*   Updated: 2023/08/25 17:02:46 by osadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

void	radix_algorithm(t_list **list, t_list **second)
{
	int	i;
	int	j;
	int size;

	i = 0;
	size = ft_lstsize(*list);
	while(is_order(*list))
	{
		j = 0;
		while(j++ < size)
		{
			if (((*list)->index >> i & 1) == 1)
			{
				rotate(list, "ra\n");	
			}
			else 
			{
				push(list, second, "pb\n");
			}
		}
		while (ft_lstsize(*second) != 0)
		{
			push(second, list, "pa\n");
		}
		i++;
	}
}


