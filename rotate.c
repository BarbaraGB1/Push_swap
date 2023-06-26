#include "libft/libft.h"
#include "push_swap.h"

void rotate(t_list  **lst)
{
	t_list *tmp;
	t_list *nodotmp;

	nodotmp = NULL;
	tmp = NULL;
	if(!lst || ft_lstsize(*lst) <= 1)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	nodotmp = ft_lstlast(*lst);
	nodotmp->next = tmp;
	nodotmp->next->next = NULL;

}
