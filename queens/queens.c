/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queens.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 07:06:18 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/01/25 08:07:38 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_mod(int x, int y)
{
	if (x < y)
		return (y - x);
	else
		return (x - y);
}

int		ft_valid(int vf, int *tab)
{
	int i;

	i = 0;
	while (i < vf)
	{
		if (tab[i] == tab[vf])
			return (0);
		if (ft_mod(tab[i], tab[vf]) == ft_mod(i, vf))
			return (0);
		i++;
	}
	return (1);
}

void	ft_back(int vf, int *tab, int *ok)
{
	int i;

	i = 0;
	while (i < 8)
	{
		tab[vf] = i;
		if (ft_valid(vf, tab))
		{
			if (vf == 7)
			{
				(*ok)++;
				printf("\n");
			}
			else
			{
				printf("%d", i);
				printf(":");
				printf("%d", vf);
				printf(" - ");
				ft_back(vf + 1, tab, ok);
			}
		}
		else
		{
			printf("!%d", i);
			printf(":");
			printf("!%d", vf);
			printf(" - ");
		}
		i++;
	}
}

int ft_queens(void)
{
	int ok;
	int tab[8];

	ok = 0;
	ft_back(0, tab, &ok);
	return (ok);
}

int		main(void)
{
	int count;

	count = ft_queens();
	printf("%d", count);
	return(0);
}
