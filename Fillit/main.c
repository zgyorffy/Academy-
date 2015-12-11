/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:05:42 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/12/11 10:22:23 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

int	main(void)
{
	int		fd;
	char	*buff;
	int		ret;

	buff = ft_strnew(BUFF_SIZE + 1);
	fd = open("Tetriminos", O_RDONLY);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
		buff[ret] = '\0';
	if (check_char(buff) == 0 || check_newbox(buff) == 0 ||
			check_count(buff) == 0)
		ft_putstr("error\n");
	else
		ft_putstr(buff);
	free(buff);
	fd = close(fd);
	return (0);
}
