/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:24:36 by zgyorffy          #+#    #+#             */
/*   Updated: 2016/03/10 09:37:58 by zgyorffy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 1024
# include "libft.h"
# include "fcntl.h"

void					error(void);

typedef struct			s_tetri
{
	unsigned char		*xy;
	char				letter;
	char				clone;
	struct s_tetri		*next;
}						t_tetri;

t_tetri					*read_file(char *s);
void					read_tetri(int fd, t_tetri **tetriminos);
char					**get_tetri(int	fd);
unsigned char			*valid_xy(char **tetri);
void					get_xy(char **tetri, int x,
		unsigned char *xy, int *check);
void					save_xy(unsigned char *xy, int x, int y);
void					set_coord(unsigned char *xy);
void					set_null(unsigned char *xy);
int						not_null(unsigned char *xy);
void					fill_list(t_tetri **tetriminos,
		unsigned char *xy, char letter);
void					add_node(t_tetri **tetriminos,
		unsigned char *xy, char letter);
t_tetri					*create_node(t_tetri *tetriminos,
		unsigned char *xy, char letter);
void					new_coord(t_tetri *list, unsigned char size);
void					new_coord_node(t_tetri *list, unsigned char size);
void					add_coord(t_tetri *list, unsigned char size);
void					add_coord_node(t_tetri *list, unsigned char size);
void					fillit(t_tetri *list);
char					*create_map(unsigned char size);
unsigned char			map_size(t_tetri *list);
void					print_map(char *map);
void					back(t_tetri *list, char *map);
int						add_tetriminos(t_tetri *list,
		char *map, unsigned char i);
void					dell_tetriminos(t_tetri *list,
		char *map, unsigned char i);
int						coord_equal(unsigned char *one, unsigned char *two);

#endif
