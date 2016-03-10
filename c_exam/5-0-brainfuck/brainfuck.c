/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:57:04 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/03/10 10:21:33 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	g_loop[4050];
int g_vector[2050];
int g_i;

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	verif(char c)
{
	if (c == '>')
		g_i++;
	if (c == '<')
		g_i--;
	if (c == '+')
		g_vector[g_i]++;
	if (c == '-')
		g_vector[g_i]--;
	if (c == '.')
		ft_putchar(g_vector[g_i]);
}

void	compute(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		verif(str[i]);
		if (str[i] == '[' && g_vector[g_i] == 0)
			i = g_loop[i];
		else if (str[i] == ']' && g_vector[g_i] != 0)
			i = g_loop[i];
		else
			i++;
	}
}

void	fuck(char *str)
{
	int i;
	int vf;
	int stack[2000];

	i = 0;
	vf = 0;
	while (str[i])
	{
		if (str[i] == '[')
		{
			stack[vf] = i;
			vf++;
		}
		if (str[i] == ']')
		{
			vf--;
			g_loop[i] = stack[vf];
			g_loop[stack[vf]] = i;
		}
		i++;
	}
	compute(str);
}

int		main(int argc, char **argv)
{
	g_i = 0;
	if (argc > 1)
		fuck(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
