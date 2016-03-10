/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 06:49:03 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/10 07:22:34 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	i = 0;
	while (i < n && s2[i] != c)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	if (i == n)
		return (NULL);
	else
		return (&s1[i + 1]);
}
