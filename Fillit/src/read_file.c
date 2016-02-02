#include "fillit.h"

t_tetri	*read_file(char *s)
{
	t_tetri	*tetriminos;
	int	fd;
	
	fd = open(s, O_RDONLY);
	if (fd == -1)
		error();
	tetriminos = NULL;
	read_tetri(fd, &tetriminos);
	return (tetriminos);
}

void	read_tetri(int fd, t_tetri **tetriminos)
{
	char		**tetri;
	char		*line;
	unsigned char	*coord;
	char		letter;
	int		boolean;

	boolean = 1;
	letter = 'A';
	while (boolean == 1)
	{
		tetri = get_tetri(fd);
		coord = valid_xy(tetri);
		set_coord(coord);
		fill_list(tetriminos, coord, letter);
		if (get_next_line(fd, &line) == 0)
			boolean = 0;
		else if (!ft_strequ(line, ""))
			error();
		letter++;
	}
	if (get_next_line(fd, &line) > 0)
		error();
}

char	**get_tetri(int fd)
{
	char	**tetri;
	int	i;
	
	tetri = (char**)malloc(sizeof(char*) * 4);
	i = 0;
	while (i < 4)
	{
		if (get_next_line(fd, tetri + i) < 1)
			error();
		i++;
	}
	return (tetri);
}
