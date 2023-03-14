# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 09:46:21 by fraalmei          #+#    #+#              #
#    Updated: 2023/03/14 10:39:57 by fraalmei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	files
FUNCTIONS = srcs/push_swap.c \
	srcs/lists/list_utils_1.c srcs/lists/list_utils_2.c \
	srcs/args/get_args.c srcs/Visualization/visualization.c\
	srcs/operations/operations.c srcs/sort/ft_sort_int.c srcs/print/print_mov.c \
	srcs/sort/ft_sort_utils.c srcs/algs/ft_sort_algs_1.c srcs/algs/ft_sort_algs_2.c \
	srcs/algs/ft_algs_utils_1.c srcs/algs/ft_algs_utils_2.c \
	srcs/sort/ft_radix.c srcs/sort/ft_sorted_utils.c

OBJS = $(FUNCTIONS_S:.c=.o)

#SRC = 

#	file's name
NAME = push_swap

#	flags
FLAGS = -Wall -Werror -Wextra #-fsanitize=address

#	options to create the library
AR = ar -rc

#	options to force the remove
RM = rm -f

#	compilation
CC = gcc

all: $(NAME)

$(NAME): libft $(SRC)$(OBJS)
	@$(CC) $(FLAGS) $(SRC)$(FUNCTIONS) ../libft/libftb.a -o $(NAME)

libft:
	@make bonus -C ../libft

clean:
	@$(RM) $(OBJS)
	@make clean -C ../libft

fclean: clean
	@$(RM) $(NAME) ../libft/libft.a

re: fclean all

.PHONY: all clean fclean re libft
