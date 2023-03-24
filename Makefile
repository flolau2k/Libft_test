all: test

clean:
	(cd libft && make fclean)

re:	clean test

test:
	(cd libft && make && make bonus)
	gcc -g -Wall -Wextra -Werror main.c -Llibft/ -lft -lbsd -fsanitize=address