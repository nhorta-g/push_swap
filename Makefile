# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 11:40:52 by nhorta-g          #+#    #+#              #
#    Updated: 2022/11/04 11:48:28 by nhorta-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC            =       $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.c))

SRC_DIR        =       src

OBJS            =       $(subst $(SRC_DIR), $(OBJS_DIR), $(SRC:.c=.o))

OBJS_DIR        =       objs

LIBFT           =       libs/libft/libft.a

NAME            =       push_swap

CC                      =       gcc -g

CFLAGS          =       -Wall -Wextra -Werror

RM                      =       rm -rf

all:            $(NAME)

$(OBJS_DIR)/%.o :       $(SRC_DIR)/%.c
                @mkdir -p $(OBJS_DIR)
                @$(CC) $(CFLAGS) -c $< -o $@

$(NAME):        $(LIBFT) $(OBJS)
                @$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
                @make -C libs/libft

clean:
                $(RM) $(OBJS_DIR)
                make clean -C libs/libft

fclean:         clean
                $(RM) $(NAME)
                make fclean -C libs/libft

re:                     fclean all

.SILENT: all clean fclean re
.PHONY: all clean fclean re
