# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flauer <flauer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:29:08 by flauer            #+#    #+#              #
#    Updated: 2023/03/16 11:45:39 by flauer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_checks.c ft_memcmp.c ft_memset.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_substr.c ft_bzero.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
