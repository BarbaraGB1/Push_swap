/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:43:45 by bargarci          #+#    #+#             */
/*   Updated: 2023/08/29 07:36:36 by bargarci         ###   ########.fr       */
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

void	swap(t_list *lst, char *var);
void	lst_add_back(t_list **list, t_list *node);
t_list	*ft_new_node(long *val);
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
t_list	*sort_numbers(t_list **lst, t_list **second);
void	two_arguments(t_list **lst);
void	put_index(t_list **list);
t_list	*find_min(t_list **list);
void	radix_algorithm(t_list **list, t_list **second);
int		no_min_max(t_list **list);
void	aux_fivearguments(t_list **lst, t_list **second);
#endif
