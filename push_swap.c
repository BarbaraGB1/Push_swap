/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaceres <acaceres@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:18:07 by acaceres          #+#    #+#             */
/*   Updated: 2023/06/21 09:22:14 by acaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**two_argv(char *s)
{
	char	**args;

	args = ft_split(s, ' ');
	if (!args)
		return (NULL);
	return (args);
}

t_list	*lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	if (!lst->next)
		return (lst);
	return (lstlast(lst->next));
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*list;

	i = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (ft_putstr("Error"), 0);
	else if (argc == 2)
	{
		argv = two_argv(argv[1]);
		list = new_lst(argv);
		print_list(list);
	}
	else
	{
		list = new_lst(argv + 1);
		swap(list, "sa");
		print_list(list);
	}
	return (0);
}
