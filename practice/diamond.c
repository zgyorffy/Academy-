#include <stdio.h>

int	main(void)
{
	int	star;
	int	i, j, buf, k;
	
	star = 10;
	i = 1;
	j = star;
	k = i;
	while (i <= star)
	{
		buf = j;
		while (buf--)
			printf(" ");
		j--;
		k = i;
		while (k--)
			printf("* ");
		printf("\n");
		i++;
	}
	while (i)
	{
		buf = j;
		while (buf--)
			printf(" ");
		j++;
		k = i;
		while (k--)
			printf("* ");
		printf("\n");
		i--;
	}
	return (0);
}
