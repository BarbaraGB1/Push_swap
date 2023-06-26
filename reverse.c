#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include "push_swap.h"

void	reverse(t_list **lst)
{	
	t_list *temp;
	t_list *nodotemp;
	
	if (!*lst || ft_lstsize(*lst) <= 1)
		return ;
	temp = *lst;
	while (temp->next && temp->next->next)
		temp = temp->next;
	nodotemp = temp->next;
	temp->next = NULL;
	nodotemp->next = *lst;
	*lst = nodotemp;
 }		
