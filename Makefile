all: test

clean:
	/bin/rm -f *.o
	/bin/rm -f *.out

re:	clean all

test:
	(cd libft && make)
	cc -g -Wall -Wextra -Werror main.c -Llibft/ -lft