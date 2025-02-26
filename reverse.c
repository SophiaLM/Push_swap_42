#include "push_swap.h"

void	ra(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	*lst = (*lst)->next;
	if (!lst)
		return ;
	while (lst)
		*lst = (*lst)->next;
	(*lst)->next = temp;
}
