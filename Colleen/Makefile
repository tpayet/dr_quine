# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpayet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/13 15:42:29 by tpayet            #+#    #+#              #
#    Updated: 2017/10/13 15:54:23 by tpayet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen

CC = clang

CFLAGS = -Wall -Wextra -Werror -Wpedantic

SRCS = Colleen.c

SRCO = $(SRCS:.c=.o)

.PHONY: clean fclean all

all: $(NAME)

$(NAME): $(SRCO)
	$(CC) -o $(NAME) $(SRCO)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

re: fclean all
