#include "../push_swap.h"

t_list *ft_lstnew(int nbr)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->nbr = nbr;
    new->index = -1;
    new->cost = 0;
    new->median = false;
    new->cheap = false;
    new->target_node = NULL;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}
