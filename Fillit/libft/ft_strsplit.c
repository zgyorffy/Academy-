/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 06:16:13 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/13 13:32:02 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cut_e(const char *str, char c)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	s = (char*)malloc(sizeof(s) * (ft_strlen(str) + 1));
	while (str[i] == c)
		i++;
	j = 0;
	while (str[i])
		s[j++] = str[i++];
	i = ft_strlen(s) - 1;
	while (s[i] == c && i > 0)
	{
		s[i] = '\0';
		i--;
	}
	return (s);
}

static char	*cut_btw(const char *str, char c)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = (char*)malloc(sizeof(s) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] == c && str[i + 1] == c)
			i++;
		else
			s[j++] = str[i++];
	}
	return (s);
}

static int	nr_words(const char *str, char c)
{
	int		words;
	int		i;
	char	*s;

	words = 1;
	i = 0;
	s = cut_btw(cut_e(str, c), c);
	if (s[i] == '\0')
		return (0);
	else
		while (s[i])
		{
			if (s[i] == c)
				words++;
			i++;
		}
	return (words);
}

static int	length(const char *str, char c, int i)
{
	char	*s;
	int		len;

	len = 0;
	s = cut_btw(cut_e(str, c), c);
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		words;

	words = nr_words(s, c);
	array = (char**)malloc(sizeof(*array) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (words)
	{
		array[j] = ft_strsub(cut_btw(cut_e(s, c), c), i, length(s, c, i));
		i = i + length(s, c, i);
		i++;
		j++;
		words--;
	}
	array[j] = NULL;
	return (array);
}
