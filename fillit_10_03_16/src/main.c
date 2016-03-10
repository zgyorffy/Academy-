/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:05:42 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/02/10 08:58:55 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

int		main(int ac, char **av)
{
	t_tetri		*list;

	if (ac == 2)
	{
		list = read_file(av[1]);
		fillit(list);
	}
	else
		error();
	return (0);
}
