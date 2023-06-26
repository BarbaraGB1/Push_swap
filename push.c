#include "libft/libft.h"
#include "push_swap.h"

void	push(t_list **lst, t_list **second)
{
	t_list	*tmp;

	if (!lst || !second)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	if ((*lst)->next->next)
	{
		tmp->next = NULL;
		*second = tmp;
	}
	else
	{		
		tmp->next = *second;
		*second = tmp;
	}
}
