/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 11:45:24 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/01/28 11:48:21 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4 & 0x0F) | (octet << 4 & 0xF0));
}

int main(void)
{
	printf("%d", swap_bits(30));
	return (0);
}
