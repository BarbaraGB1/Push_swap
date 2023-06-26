#include "libft/libft.h"
#include "push_swap.h"


void	swap(t_list *lst)
{
	int *temp;
	if (ft_lstsize(lst) <= 1)
		return ;
	else
	{
		temp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = temp;
	}
	// if (mvmt)
	// 	ft_printf("%s\n", mvmt);
}
