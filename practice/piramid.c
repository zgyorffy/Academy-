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
		while (buf)
		{
			printf(" ");
			buf--;
		}
		j--;
		k = i;
		while (k)
		{
			printf("*");
			printf(" ");
			k--;
		}
		printf("\n");
		i++;
	}
	return (0);
}
