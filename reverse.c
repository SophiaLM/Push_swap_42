#include "push_swap.h"

void	ra(t_list **lst)
{
	t_list	*temp;
	t_list	*last;

	//Guardar primer nodo y mover lst a su sig nodo
	temp = *lst;
	*lst = (*lst)->next;
	//Recorremos la lista para llegar al ultimo nodo
	last = *lst;
	while (last->next)
		last = last->next;
	//last señala de nuevo al primero
	last->next = temp;
	temp->next = NULL;
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
