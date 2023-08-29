/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movs_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:48:43 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 09:49:34 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	swap_ss(t_list *lst, t_list *second, char *var)
{
	swap(lst, 0);
	swap(second, 0);
	ft_printf("%s", var);
}

void	rotate_rr(t_list **lst, t_list **second, char *var)
{
	rotate(lst, 0);
	rotate(second, 0);
	ft_printf("%s", var);
}

void	reverse_rrr(t_list **lst, t_list **second, char *var)
{
	reverse(lst, 0);
	reverse(second, 0);
	ft_printf("%s", var);
}
