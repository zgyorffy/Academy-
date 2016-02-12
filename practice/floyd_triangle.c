#include <stdio.h>

int	main(void)
{
	int i, row, j, nb;
	
	row = 8;
	i = 1;
	j = 1;
	nb = 1;
	while (i <= row)
	{
		j = i;
		while (j--)
			printf("%d ", nb++);
		printf("\n");
		i++;
	}
	return (0);
}
