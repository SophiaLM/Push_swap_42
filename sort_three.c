#include "push_swap.h"

void	sort_three(t_list **stack)
{
    // Obtener los valores de los tres nodos de la lista
	int first = (*stack)->nbr;
	int second = (*stack)->next->nbr;
	int third = (*stack)->next->next->nbr;

	  // Identificar posición del máximo
	if (first > second && first > third) // Máximo en top
	{
		if (second > third) // 3 2 1 → sa + rra
		{
			sa(stack);
			rra(stack, false);
		}
		else // 3 1 2 → ra
			ra(stack, false);
	}
	else if (second > first && second > third) // Máximo en medio
	{
		if (first > third)    // 2 3 1 → rra
			rra(stack, false);
		else // 1 3 2 → sa + ra
		{
			sa(stack);
			ra(stack, false);
		}
	}
	else // Máximo en fondo (2 1 3 → sa)
		sa(stack);
}
