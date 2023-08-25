/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_arguments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:20:00 by osadia            #+#    #+#             */
/*   Updated: 2023/07/31 21:32:32 by osadia           ###   ########.fr       */
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
