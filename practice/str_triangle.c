#include <stdio.h>

int	main(void)
{
	char	str[100] = "Hello World!";
	int	i, count, buf;
	
	count = 0;
	i = 0;

	while(str[i])
	{
		count++;
		i++;
	}
	i = 0;
	while(count)
	{
		buf = count;
		i = 0;
		while (buf)
		{
			printf("%c", str[i]);
			i++;
			buf--;
		}
		printf("\n");
		count--;
	}
	return (0);
}
