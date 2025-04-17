#include "push_swap.h"

int	ft_lstlen(t_list *lst)
{
	int	count;

	count = 0;
	while(lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
