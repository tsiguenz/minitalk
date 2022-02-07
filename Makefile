# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/01 18:15:59 by tsiguenz          #+#    #+#              #
#    Updated: 2022/02/02 20:49:44 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server client

# Paths

OBJ_PATH = obj/

# Names

SRC = server.c client.c

OBJ_NAME = $(SRC:.c=.o)

# Files

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

# Flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = -Ilibft

# Rules

all: libft $(NAME)

$(NAME): $(OBJ)
	@echo "Build $(NAME)"
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) $(LIBFT) -o $@ -c $<

libft:
	@make -C libft/ --no-print-directory

clean:
	@make clean -C libft/ --no-print-directory
	@echo "Delete $(OBJ_PATH)"

fclean:	clean
	@make fclean -C libft/ --no-print-directory
	@echo "Delete $(NAME)"

re:	fclean all

.PHONY: all clean fclean re libft
