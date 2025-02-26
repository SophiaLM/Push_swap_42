#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h> //borrar
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

// PARCING.C //

int	ft_error(char *str);
int	is_num(char *str);

// MOVEMENTS //

void	sa(int sa);
void	sb(int sb);
void	ss(int ss);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **lst);

// SOURCES //

t_list	*ft_lstnew(void *content);
int	ft_lstlen(t_list *lst);

#endif
