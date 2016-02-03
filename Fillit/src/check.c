/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 07:53:28 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/02/03 13:46:34 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_char(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	check_newbox(char *str)
{
	int i;

	i = 19;
	if (!str[i++])
		return (0);
	while (str[i])
	{
		if (str[i] != '\n' && str[++i] != '\n' &&
				(str[++i] != '.' || str[i] != '#'))
			return (0);
		i += 19;
	}
	return (1);
}

int	check_count(char *str)
{
	int count;
	int i;
	int j;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = i;
		if (str[i] == '#')
			count++;
		if (str[i] == '\n' && (str[++j] == '\n' || str[j] == '\0'))
		{
			if (count != 4)
				return (0);
			count = 0;
		}
		i++;
	}
	return (1);
}
