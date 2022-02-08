# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 09:30:49 by tsiguenz          #+#    #+#              #
#    Updated: 2022/02/08 12:13:58 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../server

# Paths

OBJ_PATH = obj/

# Names

SRC = server.c

OBJ_NAME = $(SRC:.c=.o)

# Files

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

# Flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ../libft/libft.a -Ilibft
INC = -I../include

# Rules

$(NAME): $(OBJ)
	@echo "Build server"
	@$(CC) $(CFLAGS) $(OBJ) $(INC) $(LIBFT) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p obj
	@$(CC) $(CFLAGS) $(INC) -I../libft -o $@ -c $<

all: $(NAME)

clean:
	@echo "Delete serv/$(OBJ_PATH)"
	@rm -rf $(OBJ_PATH)

fclean:	clean
	@echo "Delete server"
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
