/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadia </var/spool/mail/osadia>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 05:48:50 by osadia            #+#    #+#             */
/*   Updated: 2023/07/12 07:42:16 by osadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"
#include "stdio.h"

// int	*do_chunks(t_list *lst)
// {
// 	int	*intervals;
// 	int	i;
// 	int	stripes;
// 	int	average;
//
// 	i = 0;
// 	if (ft_lstsize(lst) <= 10)
// 		stripes = 3;
// 	else if (ft_lstsize(lst) <= 100)
// 		stripes = 5;
// 	else if (ft_lstsize(lst) > 100)
// 		stripes = 10;
// 	average = ((mix_number(&lst, MAX) - mix_number(&lst, MIN)) / stripes);
// 	intervals = (int *)malloc(sizeof(int) * (stripes + 1));
// 	printf("malloc: %zu\n", sizeof(int) * stripes);
// 	if (!intervals)
// 		return (0);
// 	while (i < stripes)
// 	{
// 		intervals[i] = mix_number(&lst, MIN) + (i * average);
// 		i++;
// 	}
// 	intervals[i] = mix_number(&lst, MAX) + 1;
// 	return (intervals);
// }
