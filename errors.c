/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 07:38:23 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 07:38:29 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <limits.h>

int	no_repeat(t_list *lst)
{
	t_list	*current;
	t_list	*iter;

	current = NULL;
	iter = NULL;
	if (!lst)
		return (0);
	current = lst;
	iter = lst->next;
	while (current)
	{
		iter = current->next;
		while (iter)
		{
			if (*current->content == *iter->content)
				return (0);
			iter = iter->next;
		}
		current = current->next;
	}
	return (1);
}

int	is_order(t_list *lst)
{
	t_list	*iter;

	if (!lst)
		return (0);
	iter = lst;
	while (iter->next)
	{
		if (*iter->content > *iter->next->content)
			return (1);
		iter = iter->next;
	}
	return (0);
}

int	no_min_max(t_list **list)
{
	t_list	*current;

	if (!list)
		return (0);
	current = *list;
	while (current)
	{
		if (*current->content > INT_MAX && *current->content < INT_MIN)
			return (0);
		current = current->next;
	}
	return (1);
}

int	no_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '-' || (argv[i][0] >= '0' && argv[i][0] <= '9'))
			j++;
		while (argv[i][j])
		{
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
