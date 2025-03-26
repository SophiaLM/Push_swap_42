#include "push_swap.h"

int	ft_error(char *str)
{
	write(1, "error", 5);
	return (0);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i]) >= '0' && !(str[i]) <= '9')
			ft_error("error");
		i++;
	}
	return (1);
}

int	nsorted(t_list *n)
{
	int	i;

	i = 0;
	while (n && n->next)
	{
		if (n->content > n->next->content)
		{
			write(1, "\n", 1);
			return (0);
		}
		n = n->next;
	}
	return (1);
}
