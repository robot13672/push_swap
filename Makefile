# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 19:13:37 by ikhristi          #+#    #+#              #
#    Updated: 2023/04/07 19:20:29 by ikhristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	calc_cost.c calc_cost_utils.c errors_utils.c \
		main.c parsing_input_check_utils.c parsing_input.c \
		parsing.c push_swap.c push.c rev_rotate.c rotate.c small_sort.c\
		stack_utils.c stack_utils2.c swap.c

SRC_MAIN = main.c

NAME = push_swap

LIBFT = inc/libft
PRINTF = int/