/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 11:19:00 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/10 11:41:10 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s;

	if (size == 0)
		return (NULL);
	s = (void*)malloc(sizeof(*s) * size);
	if (!s)
		return (NULL);
	s = ft_memset(s, 0, size);
	return (s);
}
