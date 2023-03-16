# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flauer <flauer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:29:08 by flauer            #+#    #+#              #
#    Updated: 2023/03/16 13:57:44 by flauer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	make clean

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
