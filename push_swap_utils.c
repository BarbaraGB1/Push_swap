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

 int	no_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0') && !(argv[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

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
		printf("%d - Node: %i\n ", count, *(list->content));
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
	int				*n;

	list = NULL;
	node = NULL;		
	n = 0;
	if (!argv)
		return (NULL);
	while (*argv)
	{
		n = malloc(sizeof(int));
		if (!n)
			return (0);
		*n = ft_atoi(*argv++);
		node = ft_new_node(n);
		if (!node)
			return (0);
		lst_add_back(&list, node);
	}
	return (list);
}
