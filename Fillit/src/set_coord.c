/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:47:41 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/02/03 13:47:44 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set_coord(unsigned char	*xy)
{
	set_null(xy);
	set_null(xy + 1);
	ft_putchar('6');
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
	ft_putchar('7');
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
	ft_putchar('8');
	return (1);
}
