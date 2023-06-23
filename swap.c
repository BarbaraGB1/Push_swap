#include "libft/libft.h"
#include "push_swap.h"


int	swap(t_list *lst, char *mvmt)
{
	int *temp;
	if (ft_lstsize(lst) <= 1)
		return (0);
	else
	{
		temp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = temp;
	}
	if (mvmt)
		ft_printf("%s\n", mvmt);
	return (1);
}
