/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:44:35 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 07:40:01 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include "push_swap.h"

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

void	reverse_rrr(t_list **lst, t_list **second, char *var)
{
	reverse(lst, 0);
	reverse(second, 0);
	ft_printf("%s", var);
}
