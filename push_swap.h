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

//typedef struct t_lst {
//	int				*val;
//	struct t_lst	*next;
//}					t_lst;

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

#endif
