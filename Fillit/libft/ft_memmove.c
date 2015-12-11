/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 07:26:56 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/10 07:50:38 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;
	char	*s1;
	char	*s2;
	size_t	i;

	temp = (char*)malloc(sizeof(src) * (len + 1));
	s1 = (char*)dst;
	s2 = (char*)src;
	i = 0;
	while (i < len)
	{
		temp[i] = s2[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i < len)
	{
		s1[i] = temp[i];
		i++;
	}
	free(temp);
	return (s1);
}
