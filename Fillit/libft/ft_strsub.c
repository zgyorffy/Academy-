/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 07:10:57 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/11 07:22:56 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	s1 = (char*)malloc(sizeof(s1) * (len + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (len)
	{
		s1[i] = s[start];
		i++;
		start++;
		len--;
	}
	s1[i] = '\0';
	return (s1);
}
