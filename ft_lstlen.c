int	ft_lstlen(t_list *lst)
{
	int	count;

	count = 0;
	while(lst)
	{
		lst = lst->new;
		count++;
	}
	return (count);
}
