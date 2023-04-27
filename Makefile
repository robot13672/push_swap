# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 19:13:37 by ikhristi          #+#    #+#              #
#    Updated: 2023/04/26 11:26:32 by ikhristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBUG = -fsanitize=address
LEAKS = leaks -atExit -- ./push-swap

BONUS = checker
BONUS_MAIN = src/checker/checker.c

MAIN = src/main.c

# Libraries
LIBFTPRINTF_A = inc/libft/libft.a

# Paths
SRC_PATH = src/
OBJ_PATH = obj/
LIBFTPRINTF = inc/libft/

SRCS =  src/calc_cost.c \
		src/calc_cost_utils.c \
		src/errors_utils.c \
		src/parsing_input.c \
		src/parsing.c \
		src/push_swap.c \
		src/push.c \
		src/rev_rotate.c \
		src/rotate.c \
		src/small_sort.c \
		src/stack_utils.c \
		src/stack_utils2.c \
		src/swap.c \

OBJ = $(SRCS:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

# Rules
all: $(NAME) bonus

$(OBJ_PATH):
	mkdir $(OBJ_PATH)
#$(DEBUG)
$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFTPRINTF) bonus
	mv $(LIBFTPRINTF_A) libft.a
	$(CC) $(CFLAGS) $(OBJ) $(MAIN) -L. -lft -o $(NAME)

bonus: $(BONUS)

$(BONUS): $(OBJ)
	$(MAKE) -C $(LIBFTPRINTF) bonus
	mv $(LIBFTPRINTF_A) libft.a
	$(CC) $(CFLAGS) $^ $(BONUS_MAIN) -L. -lft -o $@

clean:
	rm -rf $(OBJ)
	rm -rf libft.a
	$(MAKE) clean -C $(LIBFTPRINTF)

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUS)

re: fclean all

.PHONY: all clean fclean re
