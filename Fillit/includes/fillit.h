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
	struct s_tetri	*next;
}			t_tetri;

t_tetri		*read_file(char *s); // 0
void		read_tetri(int fd, t_tetri **tetriminos); // 1
char		**get_tetri(int	fd); // 2
unsigned char	*valid_xy(char **tetri); // 3
void		get_xy(char **tetri, int x, unsigned char *xy, int *check); // 4
void		save_xy(unsigned char *xy, int x, int y); // 5
void		set_coord(unsigned char *xy); // 6
void		set_null(unsigned char *xy); // 7
int		not_null(unsigned char *xy); // 8
void		fill_list(t_tetri **tetriminos, unsigned char *xy, char letter); // a
void		add_node(t_tetri **tetriminos, unsigned char *xy, char letter); // b
t_tetri		*create_node(t_tetri *tetriminos, unsigned char *xy, char letter); // c
void		new_coord(t_tetri *list, unsigned char size); // d
void		new_coord_node(t_tetri *list, unsigned char size); // e
void		add_coord(t_tetri *list, unsigned char size); // f
void		add_coord_node(t_tetri *list, unsigned char size); // g
void		fillit(t_tetri *list); // h
char		*create_map(unsigned char size); // i
unsigned char	map_size(t_tetri *list); // j
void		print_map(char *map); // *
void		back(t_tetri *list, char *map); // k
int		add_tetriminos(t_tetri *list, char *map, unsigned char i); // l
void		dell_tetriminos(t_tetri *list, char *map, unsigned char i); // m

#endif
