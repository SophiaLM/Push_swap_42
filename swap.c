#include "push_swap.h"

void	sa(t_list **lst)
{
	t_list	*first;
	t_list	*second;

	first = *lst;
	second = first->next;

	first->next = second->next;
	second->next = first;
	*lst = second;
	write(1, "sa\n", 3);
}
/*
void	sb(t_list **lst)
{
	int	temp;

	temp = sb[0];
	sb[0] = sb[1];
	sb[1] = temp;
	write(1, "sa\n", 3);
}

void	ss(t_list **lst)
{
	sa(ss);
	sb(ss);
	write(1, "ss\n", 3);
}*/
