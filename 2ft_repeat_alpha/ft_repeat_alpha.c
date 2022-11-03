#include <unistd.h>
#include <stdio.h>

int	main()
{
	int	i = 0;
	int	repeat;
	char	*alpha = "AbCdEfGhIjKlMnOpQrStUvWxYz";
	while (alpha[i] != '\0')
	{
		repeat = 1;
		if (alpha[i] >= 'a' && alpha[i] <= 'z')
			repeat = repeat + alpha[i] - 'a';
		else if (alpha[i] >= 'A' && alpha[i] <= 'Z')
			repeat = repeat + alpha[i] - 'A';
		while (repeat)
		{
			write(1, &alpha[i], 1);
			repeat = repeat - 1;
		}
		i = i + 1;
	}
}
