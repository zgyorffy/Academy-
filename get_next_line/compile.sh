make -C libft/ fclean
make -C libft/
gcc -Wall -Wextra -Werror -I libft/ -c open.c
gcc -o test open.o -L libft/ -lft
rm *.o
