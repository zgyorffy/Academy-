#include "fillit.h"

void	fill_list(t_tetri **tetriminos, unsigned char *xy, char letter)
{
	if (!(*tetriminos))
		(*tetriminos) = create_node(*tetriminos, xy, letter);
	else
		add_node(tetriminos, xy, letter);
}

void	add_node(t_tetri **tetriminos, unsigned char *xy, char letter)
{
	t_tetri	*new_node;
	t_tetri	*node;
	unsigned char *s;

	new_node = create_node(*tetriminos, xy, letter);
	node = *tetriminos;
	while (node->next)
	{
		node = node->next;
		s = node->xy;
		printf("%s\n", s);
	}
	node->next = new_node;
}

t_tetri	*create_node(t_tetri *tetriminos, unsigned char *xy, char letter)
{
	t_tetri	*new_node;
	t_tetri	*node;
	
	new_node = malloc(sizeof(t_tetri));
	new_node->xy = xy;
	new_node->letter = letter;
	node = tetriminos;
	while (node)
		node = node->next;
	new_node->next = NULL;
	return (new_node);
}
