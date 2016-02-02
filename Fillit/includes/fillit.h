/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:24:36 by zgyorffy          #+#    #+#             */
/*   Updated: 2015/12/11 09:54:00 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 1024
# include "libft.h"
# include "fcntl.h"

int	check_char(char *str);
int	check_newbox(char *str);
int	check_count(char *str);
void	error(void);

#endif
