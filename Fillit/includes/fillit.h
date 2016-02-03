/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:24:36 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/02/03 13:46:09 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 1024
# include "libft.h"
# include "fcntl.h"

void		error(void);

typedef struct		s_tetri
{
	char		*xy;
	char		letter;
	char		clone;
	struct s_tetri	*next;
}			t_tetri;

t_tetri		*read_file(char *s);
void		read_tetri(int fd, t_tetri **tetriminos);
char		**get_tetri(int	fd);
unsigned char	*valid_xy(char **tetri);
void		get_xy(char **tetri, int x, unsigned char *xy, int *check);
void		save_xy(unsigned char *xy, int x, int y);
void		set_coord(unsigned char *xy);
void		set_null(unsigned char *xy);
int		not_null(unsigned char *xy);
void		fill_list(t_tetri **tetriminos, unsigned char *xy, char letter);
void		add_node(t_tetri **tetriminos, unsigned char *xy, char letter);
t_tetri		*create_node(t_tetri *tetriminos, unsigned char *xy, char letter);

#endif
