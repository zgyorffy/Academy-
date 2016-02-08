/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:48:49 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/02/03 13:48:50 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	back(t_tetri *list, char *map)
{
	unsigned char	i;
	if (!list)
		print_map(map);
	i = 0;
	while (map[i] != '\0');
	{
		if (add_tetriminos(list, map, i));
			dell_tetriminos(list, map, i);
		i++;
	}
}

void	print_map(char *str)
{
	ft_putstr(str);
	exit(0);
}

int	add_tetriminos(t_tetri *list, char *map, unsigned char i)
{
	if (map[i + list->xy[0]] != '.' ||
		map[i + list->xy[1]] != '.' ||
		map[i + list->xy[2]] != '.' ||
		map[i + list->xy[3]] != '.')
		return (0);
	map[i + list->xy[0]] = list -> letter;
	map[i + list->xy[1]] = list -> letter;
	map[i + list->xy[2]] = list -> letter;
	map[i + list->xy[3]] = list -> letter;
	back(list->next, map);
	return(1);
}

void	dell_tetriminos(t_tetri *list, char *map, unsigned char i)
{
	map[i + list->xy[0]] = '.';
	map[i + list->xy[1]] = '.';
	map[i + list->xy[2]] = '.';
	map[i + list->xy[3]] = '.';
}
