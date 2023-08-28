#include "libft.h"

unsigned long	ft_atol(const char *str)
{
	int	i;
	unsigned long	sg;
	unsigned long	nb;

	i = 0;
	sg = 1;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (sg * nb);
}
