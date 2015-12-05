make -C libft/ fclean
make -C libft/
gcc -Wall -Wextra -Werror -I libft/ -c read.c
gcc -o test read.o -L libft/ -lft
rm *.o
