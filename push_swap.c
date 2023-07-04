/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:43:19 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/26 11:43:25 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include "ft_printf/ft_printf.h"

char **two_argv(char *s)
{
	char **args;

	args = ft_split(s, ' ');
	if (!args)
		return (NULL);
	return (args);
}

t_list *lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	if (!lst->next)
		return (lst);
	return (lstlast(lst->next));
}

int main(int argc, char **argv)
{
	//	int		i;
	t_list *list;
	// t_list *second;

	//	i = 0;
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
		if (!no_digit(argv))
			return (ft_printf("Los argumentos no pueden contener carácteres alfabéticos"), 0);
		list = new_lst(argv + 1);
		if (!is_order(list) || !no_repeat(list))
			return (ft_printf("Error, argumentos no validos."), ft_lstclear(&list, free), 0);
		if (ft_lstsize(list) <= '3')
			three_arguments(list);
		print_list(list);
		/*push(&list, &second, "pp \n");
		push(&list, &second, "pp \n");
		print_list(list);
		print_list(second);
		swap_ss(list, second, "ss \n");
		print_list(list);
		print_list(second);
		rotate_rr(&list, &second, "rr \n");
		print_list(list);
		print_list(second);
		reverse_rrr(&list, &second, "rrr \n");
		print_list(list);
		print_list(second);*/
	}
	return (0);
}
