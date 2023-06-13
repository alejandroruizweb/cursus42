# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 12:48:05 by alruiz-c          #+#    #+#              #
#    Updated: 2023/06/13 12:14:39 by alruiz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[32m
RED = \033[31m
RESET = \033[0m

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -rf
AR = ar crs

INC = -Iinclude/ -Ilibft/

LIBFT = ./libft/libft.a

PUSHSWAP = push_swap
SRCS_PUSHSWAP = ./srcs/pushswap.c		\
				./srcs/checker.c 		\
				./srcs/start_stacks.c	\
				./srcs/order.c			\
				./srcs/operation_1.c 	\

all: $(PUSHSWAP)

$(PUSHSWAP): $(LIBFT) $(SRCS_PUSHSWAP)
	@$(CC) $(CFLAGS) $(INC) $(LIBFT) -o $(PUSHSWAP) $(SRCS_PUSHSWAP)
	@echo "\n $(GREEN)Pushswap está listo. Ejecútelo con el comando ./pushswap seguido de los números a ordenar.$(RESET) ✅\n"

$(LIBFT):
	@make -C libft --silent
	@echo "\n $(GREEN)Libft (¿recuerdas lo difícil que nos resultó terminarla?) está lista.$(RESET) ✅\n"

clean:
	@make -C libft clean --silent
	@echo "\n $(RED)Archivos Binarios eliminados. $(RESET) \n"

fclean: clean
	@make -C libft fclean --silent
	@$(RM) $(PUSHSWAP)
	@echo "\n $(RED)Archivos ejecutables eliminados. $(RESET) \n"

bonus: $(SERVER_B) $(CLIENT_B)

re: fclean all

.PHONY: all clean fclean re bonus