NAME = fillit

all: $(NAME)

$(NAME):
	make -C libft/ re
	gcc -c -Wall -Wextra -Werror srcs/*.c
	ar cr fillit.a *.o
	gcc libft/libft.a fillit.a -o $(NAME)

clean:
	make -C libft/ clean
	rm -rf *.o

fclean: clean
	make -C libft/ fclean
	rm -rf $(NAME) fillit.a

re: fclean all
