#include "push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*temp;
	t_list	*last;

	//Guardar primer nodo y mover lst a su sig nodo
	temp = *lst;
	*lst = (*lst)->next;
	(*lst)->prev = NULL;
	//Recorremos la lista para llegar al ultimo nodo
	last = *lst;
	while (last->next)
		last = last->next;
	//last señala de nuevo al primero
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}

void	ra(t_list **a, bool print)
{
	rotate(a);
	if (!print)
		write(1, "rb\n", 3);
}

void	rb(t_list **b, bool print)
{
	rotate(b);
	if (!print)
		write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b, bool print)
{
	rotate(a);
	rotate(b);
	if (!print)
		write(1, "rr\n", 3);
}
