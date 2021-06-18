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

NAME = printf
SRC = ft_putchar.c\
      ft_specs_init.c\
      ft_printchar.c\
      ft_putstr.c\
      ft_getnumber.c\
      ft_getwidth.c\
      ft_define_print.c\
      main.c\
	  ft_printf.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = gcc $(FLAGS) -c
all : $(NAME)
$(NAME): 
	gcc -o $(NAME) $(SRC)
clean:
	@/bin/rm -f $(OBJ)
fclean: clean
	@/bin/rm -f $(NAME)
re: fclean all
