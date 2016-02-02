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

SRC = src/main.c src/check.c src/error.c

OBJ = main.o check.o error.o

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LLIB = -lft

INC = includes/

LIBPATH = libft/

SRCPATH = src/

all: $(NAME)

$(NAME):
	make -C $(LIBPATH)
	$(CC) $(CFLAGS) -I $(INC) -c $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -L $(LIBPATH) $(LLIB) -o $(NAME)
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
