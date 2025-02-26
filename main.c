#include "push_swap.h"

void	putlst(t_list *lst, char *name)
{
	printf("%s\n", name);
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

void	main()
{
	t_list	*a1 = ft_lstnew("1");
	t_list  *a2 = ft_lstnew("2");
	t_list	*a3 = ft_lstnew("3");
	t_list	*b = ft_lstnew("4");

	a1->next = a2;
	a2->next = a3;
	putlst(a1, "original a");
//	putlst(b, "original b");

//	pa(&a1, &b);
	ra(&a1);

	putlst(a1, "change a");
//	putlst(b, "change b");
}
