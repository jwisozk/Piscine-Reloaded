# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwisozk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 14:38:14 by jwisozk           #+#    #+#              #
#    Updated: 2018/11/29 16:12:03 by jwisozk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c	\
	  srcs/ft_putstr.c	\
	  srcs/ft_strcmp.c	\
	  srcs/ft_strlen.c	\
	  srcs/ft_swap.c
OBJ = ft_putchar.o	\
	  ft_putstr.o	\
	  ft_strcmp.o	\
	  ft_strlen.o	\
	  ft_swap.o
INC = includes/ft.h
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

ft_putchar.o: srcs/ft_putchar.c
	gcc -c $(FLAGS) $(INC) srcs/ft_putchar.c

ft_putstr.o: srcs/ft_putstr.c
	gcc -c $(FLAGS) $(INC) srcs/ft_putstr.c

ft_strcmp.o: srcs/ft_strcmp.c
	gcc -c $(FLAGS) $(INC) srcs/ft_strcmp.c

ft_strlen.o: srcs/ft_strlen.c
	gcc -c $(FLAGS) $(INC) srcs/ft_strlen.c

ft_swap.o: srcs/ft_swap.c
	gcc -c $(FLAGS) $(INC) srcs/ft_swap.c

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
