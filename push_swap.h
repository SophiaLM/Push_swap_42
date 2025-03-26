#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h> //borrar
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	int	content;
	struct s_list	*next;
}	t_list;

// PARCING.C //

int	ft_error(char *str);
int	is_num(char *str);
int	nsorted(t_list *n);

// MOVEMENTS //

void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **a, t_list **b);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **stack_a, t_list **stack_b);

// SOURCES LST //

t_list	*ft_lstnew(int content);
t_list	*ft_lstcreated(char **node);
int	ft_lstlen(t_list *lst);
void	putlst(t_list *lst, char *name);

// PUSH_SWAP //

void	small_cases(t_list *lst, int size);
int	find_max();
int	find_min();

#endif
