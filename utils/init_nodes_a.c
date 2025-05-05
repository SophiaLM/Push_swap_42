/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 01:28:28 by soluna            #+#    #+#             */
/*   Updated: 2025/04/24 01:28:57 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	current_index(t_list *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = ft_lstlen(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->median = true;
		else
			stack->median = false;
		stack = stack->next;
		i++;
	}
}

static void	set_target_a(t_list *a, t_list *b)
{
	t_list	*current_b;
	t_list	*target_node;
	long	best_match;

	while (a)
	{
		best_match = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->nbr < a->nbr && current_b->nbr > best_match)
			{
				best_match = current_b->nbr;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static void	cost_analysis_a(t_list *a, t_list *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstlen(a);
	len_b = ft_lstlen(b);
	while (a)
	{
		a->cost = a->index;
		if (!a->median)
			a->cost = len_a - a->index;
		if (a->target_node->median)
			a->cost += a->target_node->index;
		else
			a->cost += len_b - a->target_node->index;
		a = a->next;
	}
}

void	set_cheap(t_list *stack)
{
	long	cheap_value;
	t_list	*cheap_node;

	if (!stack)
		return ;
	cheap_value = LONG_MAX;
	while (stack)
	{
		if (stack->cost < cheap_value)
		{
			cheap_value = stack->cost;
			cheap_node = stack;
		}
		stack = stack->next;
	}
	cheap_node->cheap = true;
}

void	init_nodes_a(t_list *a, t_list *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheap(a);
}
