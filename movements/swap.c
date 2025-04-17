#include "push_swap.h"

void	sa(t_list **lst)
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
	write(1, "sa\n", 3);
}

void	sb(t_list **lst)
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
	write(1, "sb\n", 3);
}

void	ss(t_list **lst)
{
	sa(lst);
	sb(lst);
	write(1, "ss\n", 3);
}
