/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaceres <acaceres@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:33:37 by acaceres          #+#    #+#             */
/*   Updated: 2023/06/21 09:22:20 by acaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

//typedef struct t_lst {
//	int				*val;
//	struct t_lst	*next;
//}					t_lst;

int	swap(t_list *lst, char *mvmt);
void	lst_add_back(t_list **list, t_list *node);
t_list	*ft_new_node(int *val);
t_list	*new_lst(char **argv);
void	print_list(t_list *list);
void	free_list(t_list **list);
t_list	*lstlast(t_list *lst);
void	rotate(t_list **lst);
void	reverse(t_list **lst);
void push(t_list **lst, t_list **second);

#endif
