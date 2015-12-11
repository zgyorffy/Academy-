# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgyorffy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/11 07:19:29 by zgyorffy          #+#    #+#              #
#    Updated: 2015/12/11 07:29:27 by zgyorffy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c check.c

OBJ = (subst .c,.o,$(SRC))

CFLAGS = -Wall -Wextra -Werror

CC = gcc

INC = -I libft/

LFLAG = -L libft/

LLIB = -lft

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	$(CC) $(CFLAGS) $(INC) -c $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LFLAGS) $(LLIB)
	rm $(OBJ)
	@echo "fillit created"

clean:
	rm $(OBJ)
	@echo "objects removed"

fclean: clean
	rm $(NAME)
	@echo "fillit removed"

re: fclean all
