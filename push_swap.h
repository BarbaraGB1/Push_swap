/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:43:45 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/26 11:43:49 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# define MAX 1
# define MIN 0

// typedef struct t_lst {
//	int				*val;
//	struct t_lst	*next;
// }					t_lst;

void	swap(t_list *lst, char *var);
void	lst_add_back(t_list **list, t_list *node);
t_list	*ft_new_node(int *val);
t_list	*new_lst(char **argv);
void	print_list(t_list *list);
void	free_list(t_list **list);
t_list	*lstlast(t_list *lst);
void	rotate(t_list **lst, char *var);
void	reverse(t_list **lst, char *var);
void	push(t_list **lst, t_list **second, char *var);
void	rotate_rr(t_list **lst, t_list **second, char *var);
void	swap_ss(t_list *lst, t_list *second, char *var);
void	reverse_rrr(t_list **lst, t_list **second, char *var);
int		is_order(t_list *lst);
int		no_repeat(t_list *lst);
int		no_digit(char **argv);
void	three_arguments(t_list **list);
void	five_arguments(t_list **lst, t_list **second);
int		mix_number(t_list **list, int n);
void	four_arguments(t_list **lst, t_list **second);
//int		*do_chunks(t_list *lst);
t_list	*sort_numbers(t_list *lst,  t_list *second);

#endif
