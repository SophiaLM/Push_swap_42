#include "../push_swap.h"

t_list	*ft_lstcreated(char **node)
{
	t_list	*head;
	t_list	**tail;
	int		i;
	int		n;

	head = NULL;
	tail = &head;
	i = 1;
	n = 0;
	while (node[i])
	{
		n = atoi(node[i]);
		*tail = ft_lstnew(n);
		if (!*tail)
			return (NULL);
		tail = &((*tail)->next);
		i++;
	}
	return (head);
}

void	putlst(t_list *lst, char *name)
{
	printf("%s\n", name);
	while (lst)
	{
		printf("%d\n", lst->nbr);
		lst = lst->next;
	}
	printf("\n");
}
