/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 14:46:47 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/01/28 15:03:40 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	str_size(int nb)
{
	int size;

	size = 0;
	if (nb < 0)
		size++;
	if (nb == 0)
		size++;
	while (nb)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char *s;
	long nb;
	int size;

	nb = n;
	size = str_size(nb);
	s = (char*)malloc(sizeof(s) * str_size(nb) + 1);
	s[size--] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (n == 0)
		s[0] = '0';
	else
	{
		while (nb)
		{
			s[size--] = nb % 10 + '0';
			nb = nb / 10;
		}
	}
	return (s);
}

int main(int argc, char **argv)
{
	printf("%s", ft_itoa(atoi(argv[1])));
	return (0);
}
