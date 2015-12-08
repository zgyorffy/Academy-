/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 08:53:15 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/12/08 09:20:15 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_data (int fd, char **cache)
{
	char	*buff;
	char	*temp;
	int		res;

	buff = (char*)malloc(sizeof(*buff) * (BUFF_SIZE + 1));
	if (!buff)
		return(-1);
	res = read(fd, buff, BUFF_SIZE);
	if (res > 0)
	{
		buff[res] = '\0';
		temp = ft_strjoin(*cache, buff);
		free(*cache);
		*cache = temp;
	}
	free(buff);
	return (res);
}

int	get_next_line(int const fd, char **line)
{
	static char	*cache = NULL;
	char		*eof;
	int			ret;

	if (!cache)
		cache = (char*)malloc(sizeof(*cache));
	if (cache == NULL || fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	while ((eof = ft_strchr(cache, '\n')) == NULL)
	{
		ret = get_data(fd, &cache);
		if (ret == 0)
		{
			if (ft_strlen(cache) == 0)
				return (0);
			ft_putendl(cache);
		}
		if (ret < 0)
			return (-1);
	}
	*line = ft_strsub(cache, 0, ft_strlen(cache) - ft_strlen(eof));
	cache = ft_strdup(eof + 1);
	return (1);
}
