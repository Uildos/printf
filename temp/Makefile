#  **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/22 20:13:15 by usoares-          #+#    #+#              #
#    Updated: 2021/04/22 20:15:33 by usoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a
SRC = ft_putchar.c\
      main.c\
	  ft_printf.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = gcc $(FLAGS) -c
all : $(NAME)
$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
clean:
	@/bin/rm -f $(OBJ)
fclean: clean
	@/bin/rm -f $(NAME)
re: fclean all
test: $(NAME)
	gcc main.c -L. -lprintf
