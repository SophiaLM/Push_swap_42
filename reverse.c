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
}
