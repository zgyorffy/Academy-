#include "fillit.h"

void	new_coord(t_tetri *list, unsigned char size)
{
	t_tetri	*node;
	
	node = list;
	while (node)
	{
		new_coord_node(node, size);
		node = node->next;
	}
}

void	new_coord_node(t_tetri *list, unsigned char size)
{
	unsigned char	*new_xy;
	unsigned char	i;

	new_xy = (unsigned char*)malloc(sizeof(unsigned char) * 4);
	i = 0;
	while (i < 4)
	{
		new_xy[i] = list->xy[2 * i + 1] * (size + 1) + list->xy[2 * i];
		i++;
	}
	free(list->xy);
	list->xy = new_xy;
}

void	add_coord(t_tetri *list, unsigned char size)
{
	t_tetri	*node;
	
	node = list;
	while (node)
	{
		add_coord_node(node, size);
		node = node->next;
	}
}

void	add_coord_node(t_tetri *list, unsigned char size)
{
	unsigned char *new_xy;
	unsigned char i;

	new_xy = (unsigned char*)malloc(sizeof(unsigned char) * 4);
	i = 0;
	while (i < 4)
	{
		new_xy = list->xy[i] + list->xy[i] / size;
		i++;
	}
	free(list->xy);
	list->xy = new_xy;
}
