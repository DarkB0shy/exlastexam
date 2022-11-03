#include <unistd.h>

void	write_numba(int i)
{
	if (i > 9)
		write_numba(i / 10);
	i = i % 10;
	i = i + '0';
	write(1, &i, 1);
}

int	main (void)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			write_numba(i);
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
