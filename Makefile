# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/01 18:15:59 by tsiguenz          #+#    #+#              #
#    Updated: 2022/02/08 10:48:31 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@make -C libft/ --no-print-directory
	@make -C serv/ --no-print-directory
	@make -C cli/ --no-print-directory

clean:
	@make clean -C libft/ --no-print-directory
	@make clean -C serv/ --no-print-directory
	@make clean -C cli/ --no-print-directory

fclean:
	@make fclean -C libft/ --no-print-directory
	@make fclean -C serv/ --no-print-directory
	@make fclean -C cli/ --no-print-directory

re:
	@make re -C libft/ --no-print-directory
	@make re -C serv/ --no-print-directory
	@make re -C cli/ --no-print-directory

.PHONY: all clean fclean re
