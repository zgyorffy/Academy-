/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 11:45:36 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/13 13:10:55 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strsize(long nb)
{
	int	size;

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

static char	*ft_strrev(char *str)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	s = (char*)malloc(sizeof(s) * (ft_strlen(str) + 1));
	if (str[i] == '-')
	{
		s[i++] = '-';
		while (j != 0)
			s[i++] = str[j--];
		s[i] = '\0';
	}
	else if (str[i] >= '0' && str[i] <= '9')
	{
		while (j)
			s[i++] = str[j--];
		s[i++] = str[j];
		s[i] = '\0';
	}
	return (s);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*s;
	long	nb;

	nb = n;
	s = (char*)malloc(sizeof(s) * (strsize(nb) + 1));
	i = 0;
	if (nb < 0)
	{
		s[i++] = '-';
		nb = -nb;
	}
	if (n == 0)
		s[i++] = '0';
	else
	{
		while (nb)
		{
			s[i++] = nb % 10 + '0';
			nb = nb / 10;
		}
	}
	s[i] = '\0';
	s = ft_strrev(s);
	return (s);
}
