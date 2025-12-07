#include "../push_swap.h"

void	rotate_both(t_list **a, t_list **b, t_list *cheap_node)
{
	while (*b != cheap_node->target_node && *a != cheap_node)
		rr(a, b, false);
	current_index(*a);
	current_index(*b);
}

void	rev_rotate_both(t_list **a, t_list **b, t_list *cheap_node)
{
	while (*b != cheap_node->target_node && *a != cheap_node)
		rrr(a, b, false);
	current_index(*a);
	current_index(*b);
}
