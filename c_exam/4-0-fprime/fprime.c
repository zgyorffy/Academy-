#include <stdio.h>
#include <stdlib.h>

void	fprime(int nbr)
{
	int i;
	
	i = 2;
	if (nbr <= 1)
		printf("%d", nbr);
	else
		while (nbr != 1)
		{
			while (nbr % i == 0)
			{
				nbr = nbr / i;
				printf("%d", i);
				if (nbr != 1)
					printf("*");
			}
			i++;
		}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("\n");
	else
	{
		fprime(atoi(argv[1]));
		printf("\n");
	}
	return (0);
}
