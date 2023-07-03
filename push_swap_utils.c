/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:44:09 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/26 11:44:14 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#include "ft_printf/ft_printf.h"
#include "push_swap.h"

int	is_order(t_list *lst)
{
	t_list	*iter;

	if (!lst)
		return (0);
	iter = lst;
	while (iter->next)
	{
		if (*iter->content > *iter->next->content)
		{
			return (1);
		}
		iter = iter->next;
	}
	return (0);
}

// int no_digit(t_list *lst)
// {
//
// }
void	print_list(t_list *list)
{
	int	count;

	count = 0;
	if (!list)
	{
		ft_printf("Empty List");
		return ;
	}
	while (list)
	{
		++count;
		printf("%d - Node: %i\n", count, *(list->content));
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

t_list	*ft_new_node(int *val)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = val;
	node->next = NULL;
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
	int				*n;

	list = NULL;
	node = NULL;
	n = 0;
	if (!argv)
		return (NULL);
	while (*argv)
	{
		n = malloc(sizeof(int));
		*n = ft_atoi(*argv++);
		if (n < 0)
			return (ft_printf("Error"), NULL);
		node = ft_new_node(n);
		lst_add_back(&list, node);
	}
	return (list);
}
