#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	write(1, "a", 1);
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	init_stack_a(&a, av + 1);
	write(1, "2", 1);
	if (!is_sorted(a))
	{
		if (ft_lstlen(a) == 2)
			sa(&a);
		else if(ft_lstlen(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
