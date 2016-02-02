#include "fillit.h"

void	set_coord(unsigned char	*xy)
{
	set_null(xy);
	set_null(xy + 1);
}

void	set_null(unsigned char *xy)
{
	int i;
	
	while (not_null(xy))
	{
		i = 0;
		while (i < 8)
		{
			(xy[i])--;
			i += 2;
		}
	}
}

int	not_null(unsigned char *xy)
{

	int i;
	
	i = 0;
	while (i < 8)
	{
		if (xy[i] == 0)
			return (0);
		i += 2;
	}
	return (1);
}
