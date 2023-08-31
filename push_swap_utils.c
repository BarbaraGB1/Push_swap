/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:44:09 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 07:35:56 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	print_list(t_list *list)
{
	int	count;

	count = 0;
	if (!list)
		return ;
	while (list)
	{
		++count;
		printf("%d - Node: %li\n ", count, *(list->content));
		list = list->next;
	}
}

void	free_list(t_list **list)
{
	t_list	*current;
	t_list	*link;

	if (!list)
		return ;
	current = *list;
	link = 0;
	while (current)
	{
		link = current->next;
		free(current);
		current = link;
	}
	*list = NULL;
}

t_list	*ft_new_node(long *val)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = val;
	node->next = NULL;
	node->index = -1;
	return (node);
}

void	lst_add_back(t_list **list, t_list *node)
{
	t_list	*tail;

	if (!*list)
	{
		*list = node;
		return ;
	}
	tail = lstlast(*list);
	tail->next = node;
}

t_list	*new_lst(char **argv)
{
	t_list			*list;
	t_list			*node;
	long			*n;

	list = NULL;
	node = NULL;
	n = 0;
	if (!argv)
		return (NULL);
	while (*argv)
	{
		n = malloc(sizeof(long));
		if (!n)
			return (0);
		*n = ft_atol(*argv++);
		node = ft_new_node(n);
		if (!node)
		{
			free(n);
			free(list);
			return (0);
		}
		lst_add_back(&list, node);
	}
	return (list);
}
