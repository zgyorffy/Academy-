#include "fillit.h"

unsigned char	*valid_xy(char **tetri)
{
	unsigned char	*xy;
	int		check;
	int		x;
	
	xy = malloc(sizeof(char) * 8);
	ft_memset(xy, 4, 8);
	check = 0;
	x = 0;
	while (x < 4)
	{
		get_xy(tetri, x, xy, &check);
		x++;
	}
	if (check < 3)
		error();
	return(xy);
}

void	get_xy(char **tetri, int x, unsigned char *xy, int *check)
{
	int	y;
	
	y = 0;
	while(y < 4)
	{
		if (tetri[x][y] != '.' && tetri[x][y] != '#')
			error();
		if (tetri[x][y] == '#')
		{
			if (xy[7] != 4)
				error();
			save_xy(xy, x, y);
			if (y != 3 && tetri[x][y + 1] == '#')
				(*check)++;
			if (x != 3 && tetri[x + 1][y] == '#')
				(*check)++;
		}
		y++;
	}
	if (tetri[x][y] != '\0')
		error();
}

void	save_xy(unsigned char *xy, int x, int y)
{
	int	i;
	i = 0;
	while (xy[i] != 4)
		i++;
	if (i >= 8)
		error();
	xy[i] = x;
	xy[i + 1] = y;
}
