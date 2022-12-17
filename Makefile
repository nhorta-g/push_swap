# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 11:40:52 by nhorta-g          #+#    #+#              #
#    Updated: 2022/12/17 16:28:39 by nhorta-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c \
		src/utils.c \
		src/parse_check_input.c \
		src/print.c \
		src/push.c \
		src/reverse_rotate.c \
		src/rotate.c \
		src/sort_2_3.c \
		src/sort_4_5_and_max_min.c \
		src/sort_big.c \
		src/swap.c

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address

RM		= rm -rf

LIBFT = libft/libft.a

all: 		$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -Llibft -lft -o $(NAME)

$(LIBFT):
			@make bonus -C libft

clean:
			$(RM) $(OBJS)
			@make clean -C libft

fclean: 	clean
			$(RM) $(NAME) $(OBJS)
			@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re libft
.SILENT: all clean fclean re
