# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flauer <flauer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:29:08 by flauer            #+#    #+#              #
#    Updated: 2023/03/14 16:09:55 by flauer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror ft_*.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -f *.out

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all

test:
	gcc -Wall -Wextra -Werror *.c