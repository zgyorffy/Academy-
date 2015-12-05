/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 08:53:15 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/12/05 10:02:17 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_data (int fd, **cache)
{
	char	*buff;
	ls -

int	get_next_line(int const fd, char **line)
{
	char	*cache = NULL;
	char	*eof;
	int		ret;

	cache = ft_strnew(BUFF_SIZE + 1);
	if (!cache || fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	while ((eof = ft_strchr(cache, '\n')) == 0)
	{
	}
	*line = ft_strsub(cache, 0, ft_strlen(cache) - ft_strlen(eof));
	chache = ft_strdup(eof + 1);
	return (1);
}
