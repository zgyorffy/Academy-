#include <unistd.h>

char ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	
	if (argc == 1)
	{
		ft_putchar('\n');
		return(0);
	}
	i = 0;
	while (argv[i])
		i++;
	i--;
	j = 0;
	while (argv[i][j])
	{
		ft_putchar(argv[i][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
