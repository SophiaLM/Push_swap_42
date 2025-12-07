#include "../push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*temp;
	t_list	*tail;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	temp = *lst;
	tail = NULL;
	while (temp->next)
	{
		tail = temp;
		temp = temp->next;
	}
	tail->next = NULL;
	tail->prev = tail->prev;
	temp->next = *lst;
	(*lst)->prev = temp;
	temp->prev = NULL;
	*lst = temp;
}

void	rra(t_list **a, bool print)
{
	reverse_rotate(a);
	if (!print)
		write(1, "rra\n", 4);
}

void	rrb(t_list **b, bool print)
{
	reverse_rotate(b);
	if (!print)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, bool print)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (!print)
		write(1, "rrr\n", 4);
}
