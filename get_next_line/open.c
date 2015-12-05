/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:47:48 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/12/04 15:33:01 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int fd;

	fd = open("zsolt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	ft_putnbr(fd);
	ft_putchar('\n');
	ft_putstr_fd("Hello\n", fd);
	fd = close(fd);
	ft_putnbr(fd);
	ft_putchar('\n');
	return (0);
}
