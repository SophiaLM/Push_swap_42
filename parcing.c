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

int	num_repeat(char *str)
{
	char	*arr;
	int	vistos;
	int	num;
	int	len;
	int	i;
	int	j;

	arr = ft_split(str, ' ');
	len = sizeof(arr);
	vistos[len] = {0};
	num = 0;
	i = 0;
	j = 0;
	while (arr[i])
	{
		while(vistos[i])
			if(vistos[i] == arr[i][j])
				ft_error("error");
		vistos[i] = arr[i][j];
		i++;
		j++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac < 1)
		ft_error("error");
	is_num(av[1]);
	num_repeat(av[1]);
}
