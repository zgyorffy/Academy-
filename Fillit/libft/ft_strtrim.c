/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srttrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 07:47:40 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/11/11 09:01:48 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s1;
	size_t	i;
	size_t	j;

	s1 = (char*)malloc(sizeof(s1) * (ft_strlen(s) + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = 0;
	while (s[i])
		s1[j++] = s[i++];
	i = ft_strlen(s1) - 1;
	while ((s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t') && i > 0)
	{
		s1[i] = '\0';
		i--;
	}
	return (s1);
}
