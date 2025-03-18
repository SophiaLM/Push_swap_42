#include "push_swap.h"

void	ra(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	*lst = (*lst)->next;
	temp->next = NULL;
	if (!lst)
		return ;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = temp;
	*lst = temp;
	write(1, "ra\n", 3);
}

void	rb(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	*lst = (*lst)->next;
	temp->next = NULL;
	if (!lst)
		return ;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = temp;
	*lst = temp;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
