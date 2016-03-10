/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 07:55:14 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/17 16:20:42 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return ((unsigned char*)(s + i));
		else
			i++;
	}
	return (NULL);
}
