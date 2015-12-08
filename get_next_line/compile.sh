make -C libft/ fclean
make -C libft/
gcc -Wall -Wextra -Werror -I libft/ -c get_next_line.c
gcc -Wall -Wextra -Werror -I libft/ -c main.c
gcc -o test main.o get_next_line.o -L libft/ -lft
rm *.o
