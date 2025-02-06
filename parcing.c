int	ft_error(char *str)
{
	write(1, "error", 5);
	return (0);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i]) >= '0' && !(str[i]) <= '9')
			ft_error("error");
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac < 1)
		ft_error("error");
	is_num(av[1]);
}
