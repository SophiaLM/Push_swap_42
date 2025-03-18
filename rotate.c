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
	t_list	*last;

	temp = *lst;
	*lst = (*lst)->next;
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
