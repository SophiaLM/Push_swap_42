#include "push_swap.h"

/* necesitamos el ultimo nodo (para convertirlo en el primero), 
 * el penultimo (para que sea ese el que señala a NULL ahora).
 * tambien guardaremos la direccion de memoria oriinal de la 
 * lista en una variable temp para no perder los demas  nodos; */

void	rra(t_list **lst)
{
	t_list	*temp;
	t_list	*tail;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	temp = *lst;
	tail = NULL;
	//busca el ultimo (temp) y el penultimo (tail)
	while(temp->next)
	{
		tail = temp;
		temp = temp->next;
	}
	tail->next = NULL;//penultimo ahora es el ultimo
	temp->next = *lst;//ultimo apunta al primero
	*lst = temp;//la lista ahora empieza en el ultimo
	write(1, "rra\n", 4);
}

void	rrb(t_list **lst)
{
	t_list	*temp;
	t_list	*tail;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	temp = *lst;
	tail = NULL;
	//busca el ultimo (temp) y el penultimo (tail)
	while(temp->next)
	{
		tail = temp;
		temp = temp->next;
	}
	tail->next = NULL;//penultimo ahora es el ultimo
	temp->next = *lst;//ultimo apunta al primero
	*lst = temp;//la lista ahora empieza en el ultimo
	write(1, "rra\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
