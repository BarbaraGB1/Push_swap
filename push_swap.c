/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:07:20 by osadia            #+#    #+#             */
/*   Updated: 2023/07/10 09:07:45 by osadia           ###   ########.fr       */
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

	//	i = 0;
	second = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (ft_putstr("Error"), 0);
	else if (argc == 2)
	{
		argv = two_argv(argv[1]);
		list = new_lst(argv);
		free_split(argv);
	//	print_list(list);
	}
	else
	{
		if (!no_digit(argv))
			return (ft_printf("Los argumentos no pueden contener carácteres alfabéticos"), 0);
		list = new_lst(argv + 1);
	//	print_list(list);
		if (!is_order(list) || !no_repeat(list))
			return (ft_printf("Error, argumentos no validos."), ft_lstclear(&list, free), 0);
	}
	put_index(&list);
	//print_list(list);
	sort_numbers(&list, &second);
	//print_list(list);
	ft_lstclear(&list, free);
	ft_lstclear(&second, free);
	return (0);
}
