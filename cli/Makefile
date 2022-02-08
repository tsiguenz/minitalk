# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 09:32:49 by tsiguenz          #+#    #+#              #
#    Updated: 2022/02/08 12:14:29 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../client

# Paths

OBJ_PATH = obj/

# Names

SRC = client.c

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
	@echo "Build client"
	@$(CC) $(CFLAGS) $(OBJ) $(INC) $(LIBFT) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p obj
	@$(CC) $(CFLAGS) $(INC) -I../libft -o $@ -c $<

all: $(NAME)

clean:
	@echo "Delete cli/$(OBJ_PATH)"
	@rm -rf $(OBJ_PATH)

fclean:	clean
	@echo "Delete client"
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
