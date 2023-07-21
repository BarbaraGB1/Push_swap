#include "push_swap.h"

int	*do_chunks(t_list *lst)
{
	int	*intervals;
	int	i;
	int	stripes;
	int	average;

	i = 0;
	if (ft_lstsize(lst) <= 10)
		stripes = 3;
	else if (ft_lstsize(lst) <= 100)
		stripes = 5;
	else if (ft_lstsize(lst) > 100)
		stripes = 10;
	average = ((mix_number(&lst, MAX) - mix_number(&lst, MIN)) / stripes);
	intervals = (int *)malloc(sizeof(int) * (stripes + 1));
	if (!intervals)
		return (0);
	while (i < stripes)
	{
		intervals[i] = mix_number(&lst, MIN) + (i * average);
		i++;
	}
	intervals[i] = mix_number(&lst, MAX) + 1;
	return (intervals);
}

t_list	*sort_numbers(t_list **lst,  t_list **second)
{

	if (ft_lstsize(*lst) == 3)
		three_arguments(lst);
	else if (ft_lstsize(*lst) == 4)
		four_arguments(lst, second);
	else if (ft_lstsize(*lst) == 5)
		five_arguments(lst, second);
	else
		do_chunks(*lst);
	return(*lst);
}
