all: re

clean:
	(cd libft && make fclean)

re:	clean test

test:
	(cd libft && make)
	cc -g -Wall -Wextra -Werror main.c -Llibft/ -lft -fsanitize=address