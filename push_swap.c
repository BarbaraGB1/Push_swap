/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 07:35:06 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 07:35:25 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include "ft_printf/ft_printf.h"

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

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	main(int argc, char **argv)
{
	t_list	*list;
	t_list	*second;

	second = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	if (!no_digit(argv))
		return (ft_printf("Error"), 0);
	else if (argc == 2)
	{
		argv = two_argv(argv[1]);
		list = new_lst(argv);
		free_split(argv);
	}
	else
		list = new_lst(argv + 1);
	if (!is_order(list) || !no_repeat(list) || !no_min_max(&list))
		return (ft_printf("Error"), ft_lstclear(&list, free), 0);
	put_index(&list);
	sort_numbers(&list, &second);
	ft_lstclear(&list, free);
	ft_lstclear(&second, free);
	return (0);
}
