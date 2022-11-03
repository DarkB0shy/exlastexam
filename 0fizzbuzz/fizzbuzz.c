#include <unistd.h>

void	put_nbr(int	i)
{
	if (i > 9)
		put_nbr(i / 10);
	i = (i % 10) + '0';
	write (1, &i, 1);
}

int	main (void)
{
	int	i = 1;

	while (i < 100)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz", 4);
		if (i % 3 != 0 && i % 5 != 0)
			put_nbr(i);
		write (1, "\n", 1);
		i++;
	}
}
