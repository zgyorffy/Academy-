# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/11 07:19:29 by zgyorffy          #+#    #+#              #
#    Updated: 2015/12/11 08:51:10 by zgyorffy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = src/main.c src/read_file.c src/error.c src/coord.c src/set_coord.c \
	src/fill_list.c src/new_coord.c src/fillit.c src/back.c

OBJ = main.o read_file.o error.o coord.o set_coord.o fill_list.o new_coord.o \
	fillit.o back.o

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LLIB = -lft

INC = includes/

LIBPATH = libft/

SRCPATH = src/

all: $(NAME)

$(NAME):
	make -C $(LIBPATH)
	$(CC) -I $(INC) -c $(SRC)
	$(CC) $(OBJ) -L $(LIBPATH) $(LLIB) -o $(NAME)
	@echo "fillit created"

clean:
	@rm -f $(OBJ)
	@make -C libft/ clean
	@echo "fillit objects removed"

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean
	@echo "fillit removed"

re: fclean all
