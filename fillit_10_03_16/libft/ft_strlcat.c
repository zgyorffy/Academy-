/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 09:40:24 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/13 11:28:55 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t n;
	size_t i;
	size_t j;
	size_t len;

	n = ft_strlen(dst) + ft_strlen(src);
	len = ft_strlen(dst);
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	if (size == ft_strlen(dst))
		return (n);
	else
	{
		i = 0;
		while (dst[i])
			i++;
		j = 0;
		while (src[j] && j < size - len - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (n);
}
