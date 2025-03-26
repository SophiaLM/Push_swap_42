#include "push_swap.h"

/*	---> ¿Porque tail es un doble puntero? <--
	Tail es un doble puntero porque apunta al puntero 'head' inicialmente, 
	y luego al campo 'next' de cada nodo. Esto permite modificar directamente 
	la dirección a la que apunta 'head' o 'next' sin necesidad de una 
	variable auxiliar como 'current'. Es importante explicar esto de manera clara
*/


/*
	Pasarle los nodos a mano en el main;
t_list *ft_manual_lstcreated(char **node)
{
	t_list	*head;
	t_list	**tail;
	int	i;

	i = 0;
	head = NULL; //para evitar fallos de memoria!
	tail = &head; //Tail tiene que apuntar al next del ultimo nodo;
	while (node[i])
	{
		*tail = ft_lstnew(node[i]);
		if (!*tail)
			return (NULL); //Lo ideal seria limpiar la lista :(
		tail = &((*tail)->next); //actualizamos el puntero de teil
		i++;
	}
	return (head);
}

*/

t_list	*ft_lstcreated(char **node)
{
	t_list	*head;
	t_list	**tail;
	int	i;
	int	n;

	head = NULL;
	tail = &head;
	i = 1;
	n = 0;
	while(node[i])
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
		printf("%d\n", lst->content);
		lst = lst->next;
	}
	printf("\n");
}
