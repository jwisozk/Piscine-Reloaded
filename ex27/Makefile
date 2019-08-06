# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwisozk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 14:38:14 by jwisozk           #+#    #+#              #
#    Updated: 2018/11/29 23:19:22 by jwisozk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/ft_putchar.c			\
	  srcs/ft_putstr.c			\
	  srcs/ft_display_file.c	\
	  srcs/main.c
OBJ = ft_putchar.o				\
	  ft_putstr.o				\
	  ft_display_file.o			\
	  main.o
INC = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

ft_putchar.o: srcs/ft_putchar.c
	gcc -c $(FLAGS) -I$(INC) srcs/ft_putchar.c

ft_putstr.o: srcs/ft_putstr.c
	gcc -c $(FLAGS) -I$(INC) srcs/ft_putstr.c

ft_display_file.o: srcs/ft_display_file.c
	gcc -c $(FLAGS) -I$(INC) srcs/ft_display_file.c

main.o: srcs/main.c
	gcc -c $(FLAGS) -I$(INC) srcs/main.c

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
