#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h> //borrar
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_list
{
	int	nbr;
	int	index;
	int	cost;
	bool	median;
	bool	cheap;
	struct s_list	*target_node;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

// PARCING.C //

int	ft_error(char *str);
int	is_valid_number(char *str);
int	is_sorted(t_list *stack);
int	duplicate_number(t_list *a, int n);
void	free_stack(t_list **stack);
void	free_errors(t_list **a);

// MOVEMENTS //

void	sa(t_list **lst, bool print);
void	sb(t_list **lst, bool print);
void	ss(t_list **a, t_list **b, bool print);
void	pa(t_list **a, t_list **b, bool print);
void	pb(t_list **a, t_list **b, bool print);
void	ra(t_list **a, bool print);
void	rb(t_list **b, bool print);
void	rr(t_list **a, t_list **b, bool print);
void	rra(t_list **a, bool print);
void	rrb(t_list **b, bool print);
void	rrr(t_list **stack_a, t_list **stack_b, bool print);

// INITS //

void	current_index(t_list *stack);
void	set_cheap(t_list *stack);
void	init_nodes_a(t_list *a, t_list *b);
void	init_nodes_b(t_list *a, t_list *b);

void            init_stack_a(t_list **a, char **av);
t_list          *get_cheapest(t_list *stack);
void            prep_for_push(t_list **stack, t_list *top_node, char stack_name);

// FT_LST //

t_list	*ft_lstnew(int content);
t_list	*ft_lstcreated(char **node);
int	ft_lstlen(t_list *lst);
void	putlst(t_list *lst, char *name);
t_list	*find_last(t_list *stack);
t_list	*find_min(t_list *stack);
t_list	*find_max(t_list *stack);

// SORT //

void    sort_stacks(t_list **a, t_list **b);

// PUSH_SWAP //

void	sort_three(t_list **stack);
void	sort_stacks(t_list **a, t_list **b);

#endif
