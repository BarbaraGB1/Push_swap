#include "push_swap.h"

void	five_arguments(t_list **lst, t_list **second)
{
	t_list	*first;
	int		n;

	if (!*lst)
		return ;
	first = *lst;
	n = mix_number(lst, MIN);
	if (!is_order(*lst))
		return ;
	if (*first->content == n)
	{
		push(lst, second, "pb\n");
		four_arguments(lst, second);
		push(second, lst, "pa\n");
		return ;
	}
	else
		rotate(lst, "rra\n");
	five_arguments(lst, second);
}
	/*void five_arguments(t_list *list, t_list *second) 
{
	
}*/
