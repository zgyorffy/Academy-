# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/11 06:10:54 by zgyorffy          #+#    #+#              #
#    Updated: 2015/12/11 06:56:17 by zgyorffy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c check_tetris.c

OBJ = (subst .c,.o,$(SRC))

CFLAGS = -Wall -Wextra -Werror

CC = gcc

INC = -I libft/

LFLAGS = -L libft/

LLIBS = -lft

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	$(CC) $(CFLAGS) $(INC) -c $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LFLAGS) $(LLIBS)
	rm $(OBJ)
	@echo "fillit created"

clean:
	rm $(OBJ)
	@echo "objects removed"

flclean: clean
	rm $(NAME)
	@echo "fillit removed"

re: fclean all
