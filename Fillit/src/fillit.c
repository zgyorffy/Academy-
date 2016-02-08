/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:48:42 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/02/03 13:48:43 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		fillit(t_tetri *list)
{
	char		*map;
	unsigned char	size;

	size = map_size(list);
	new_coord(list, size);
	while (1)
	{
		map = create_map(size);
		back(list, map);
		size++;
		add_coord(list, size);
	}
}

char		*create_map(unsigned char size)
{
	char	*map;
	int	i;

	map = (char*)malloc(sizeof(char) * ((size + 1) * (size + 1)));
	i = 0;
	while (i < size)
	{
		ft_memset(map + (size + 1) * i, '.', size);
		map[(i + 1) * (size + 1) - 1] = '\n';
		i++;
	}
	ft_memset(map + (size + 1) * i, '\0', size + 1);
	return (map);
}

unsigned char	map_size(t_tetri *list)
{
	unsigned char	pieces;
	unsigned char	size;
	t_tetri		*i;
	
	pieces = 0;
	i = list;
	while (i)
	{
		pieces++;
		i = i->next;
	}
	size = 0;
	while (size * size < pieces * 4)
		size++;
	return (size);
}
