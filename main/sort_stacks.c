#include "../push_swap.h"

static void	rotate_both(t_list **a, t_list **b, t_list *cheap_node)
{
	while (*b != cheap_node->target_node && *a != cheap_node)
		rr(a, b, false);
	current_index(*a);
	current_index(*b);
}

static void	rev_rotate_both(t_list **a, t_list **b, t_list *cheap_node)
{
	while (*b != cheap_node->target_node && *a != cheap_node)
		rrr(a, b, false);
	current_index(*a);
	current_index(*b);
}

static void	move_a_to_b(t_list **a, t_list **b)
{
	t_list	*cheap_node;

	cheap_node = get_cheapest(*a);
	if (cheap_node->median && cheap_node->target_node->median)
		rotate_both(a, b, cheap_node);
	else if (!cheap_node->median && !cheap_node->target_node->median)
		rev_rotate_both(a, b, cheap_node);
	prep_for_push(a, cheap_node, 'a');
	prep_for_push(b, cheap_node->target_node, 'b');
	pb(b, a, false);
}

static void	move_b_to_a(t_list **a, t_list **b)
{
	prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void	min_on_top(t_list **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_list **a, t_list **b)
{
	int	len_a;

	len_a = ft_lstlen(*a);
	if (len_a-- > 3 && !is_sorted(*a))
		pb(b, a, false);
	if (len_a-- > 3 && !is_sorted(*a))
		pb(b, a, false);
	while (len_a-- > 3 && !is_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}

