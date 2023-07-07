#include "push_swap.h"

int	min_number(t_list **list)
{
	t_list	*current;
	t_list	*iter;
	int		c;
	int		p;
	
	current = *list;
	iter = NULL;
	p = *current->content;
	c = 0;
	while (current)
	{
		iter = current->next;
		while (iter)
		{
			c = *iter->content;
			if (p > c)
				p = c;
			iter = iter->next;
			//ft_printf("%i", p);
		}
		current = current->next;
	}
	return (p);
}	


