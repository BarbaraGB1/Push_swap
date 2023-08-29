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
	t_list	*list;
	t_list	*second;

	second = NULL;
	if (!no_digit(argv))
		return (write(2, "Error\n", 7), 0);
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	else
		list = new_lst(argv + 1);
	if (!is_order(list))
		return (0);
	if (!no_repeat(list) || !no_min_max(&list))
		return (write(2, "Error\n", 7), ft_lstclear(&list, free), 0);
	put_index(&list);
	sort_numbers(&list, &second);
	ft_lstclear(&list, free);
	ft_lstclear(&second, free);
	return (0);
}
