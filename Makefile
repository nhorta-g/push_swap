# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 11:40:52 by nhorta-g          #+#    #+#              #
#    Updated: 2022/12/09 20:35:32 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c \
		src/list_utils.c \
		src/push.c \
		src/reverse_rotate.c \
		src/rotate.c \
		src/small_sort.c \
		src/swap.c \

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g #-fsanitize=address

RM		= rm -rf

LIBFT = libft/libft.a

all: $(NAME)

$(NAME):	$(PRINTF) $(LIBFT) $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -Llibft -lft -o $(NAME)
		@make clean

$(LIBFT):
		@make bonus -C libft

clean:
	$(RM) $(OBJS)
	@make clean -C libft

fclean: clean
	$(RM) $(NAME) $(OBJS)
	@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re libft
.SILENT: all clean fclean re
