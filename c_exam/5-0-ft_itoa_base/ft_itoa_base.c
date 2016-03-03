#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strrev(char *str)
{
	int i;
	int j;
	char aux;
	
	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		aux = str[i];
		str[i++] = str[j];
		str[j--] = aux;
	}
}

char	*ft_itoa_base(int val, int base)
{
	char *buff;
	char *begin_buff;
	int sign;
	long nb;

	nb = val;
	sign = 1;
	buff = NULL;
	buff = (char*)malloc(sizeof(char) * 32);
	begin_buff = buff;
	if (val == 0)
	{
		*buff = '0';
		buff++;
		*buff = '\0';
		return (begin_buff);
	}
	if (nb < 0)
	{
		if (base == 10)
			sign = -1;
		nb = -nb;
	}
	while (nb > 0)
	{
		*buff = "0123456789ABCDEF"[nb % base];
		nb = nb / base;
		buff++;
	}
	if (sign < 0)
	{
		*buff = '-';
		buff++;
	}
	*buff = '\0';
	buff = begin_buff;
	ft_strrev(buff);
	return (buff);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("\n");
	else
		printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
