/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 07:34:37 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/12/05 08:17:23 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUF_SIZE 100

int main()
{
	int fd;
	char buf[BUF_SIZE + 1];
	int ret;
	
	fd = open("zsolt", O_RDONLY);
	
	ret = read(fd, buf, BUF_SIZE);
	
	buf[ret] = '\0';
	ft_putnbr(ret);
	ft_putchar('\n');
	ft_putstr(buf);

	fd = close(fd);
	return (0);
}
