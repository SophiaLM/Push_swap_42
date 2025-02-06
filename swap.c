#include <stdio.h>
#include <unistd.h>

void	sa(int *sa)
{
	int	temp;

	temp = sa[0];
	sa[0] = sa[1];
	sa[1] = temp;
	write(1, "sa\n", 3);
}

void	sb(int *sb)
{
	int	temp;

	temp = sb[0];
	sb[0] = sb[1];
	sb[1] = temp;
	write(1, "sa\n", 3);
}

void	ss(int *ss)
{
	sa(ss);
	sb(ss);
}

int	main()
{
	int	array[] = {1, 5, 6};
	sa(array);

	int	i = 0;
	char	c;
	while (i < 3)
	{
		c = array[i] + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
