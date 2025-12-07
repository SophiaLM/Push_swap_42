#include "../push_swap.h"

static	void	swap(t_list **lst)
{
	t_list	*first;
	t_list	*second;

	first = *lst;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*lst = second;
}

void	sa(t_list **lst, bool print)
{
	swap(lst);
	if (!print)
		write(1, "sa\n", 3);
}

void	sb(t_list **lst, bool print)
{
	swap(lst);
	if (!print)
		write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		write(1, "ss\n", 3);
}
