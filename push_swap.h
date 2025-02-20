#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

int	ft_error(char *str);
int	is_num(char *str);

#endif
