#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a = ft_lstcreated(av);
	int	size = ft_lstlen(a);

	small_cases(a, size);
}
