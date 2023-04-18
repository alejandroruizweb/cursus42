# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 12:48:05 by alruiz-c          #+#    #+#              #
#    Updated: 2023/04/18 11:38:01 by alruiz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[32m
RED = \033[31m
RESET = \033[0m

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

INC = -Iinclude/ -Ilibft/

LIBFT = ./libft/libft.a

SERVER = server
SRCS_SERVER = ./srcs/server.c

CLIENT = client
SRCS_CLIENT = ./srcs/client.c

SERVER_B = server_bonus
SRCS_SERVER_B = ./srcs_bonus/server_bonus.c

CLIENT_B = client_bonus
SRCS_CLIENT_B = ./srcs_bonus/client_bonus.c

all: $(SERVER) $(CLIENT)

$(SERVER): $(LIBFT) $(SRCS_SERVER)
	@$(CC) $(CFLAGS) $(INC) $(LIBFT) -o $(SERVER) $(SRCS_SERVER)
	@echo "\n $(GREEN) El Servidor está listo. Ejecútelo con el comando ./server y siga las instrucciones.$(RESET) ✅\n"

$(CLIENT): $(LIBFT) $(SRCS_CLIENT)
	@$(CC) $(CFLAGS) $(INC) $(LIBFT) -o $(CLIENT) $(SRCS_CLIENT)
	@echo "\n $(GREEN) El Cliente está listo.$(RESET) ✅\n"

$(SERVER_B): $(LIBFT) $(SRCS_SERVER_B)
	@$(CC) $(CFLAGS) $(INC) $(LIBFT) -o $(SERVER_B) $(SRCS_SERVER_B)
	@echo "\n $(GREEN) El Servidor Bunus está listo. Ejecútelo con el comando ./server_bonus y siga las instrucciones.$(RESET) ✅\n"

$(CLIENT_B): $(LIBFT) $(SRCS_CLIENT_B)
	@$(CC) $(CFLAGS) $(INC) $(LIBFT) -o $(CLIENT_B) $(SRCS_CLIENT_B)
	@echo "\n $(GREEN) El Cliente está listo.$(RESET) ✅\n"

$(LIBFT):
	@make -C libft --silent
	@echo "\n $(GREEN)Libft (¿recuerdas lo difícil que nos resultó terminarla?) está lista.$(RESET) ✅\n"

clean:
	@make -C libft clean --silent
	@echo "\n $(RED) Archivos Binarios eliminados. $(RESET) \n"

fclean: clean
	@make -C libft fclean --silent
	@$(RM) $(CLIENT) $(SERVER) $(CLIENT_B) $(SERVER_B)
	@echo "\n $(RED) Archivos ejecutables eliminados. $(RESET) \n"

bonus: $(SERVER_B) $(CLIENT_B)

re: fclean all

.PHONY: all clean fclean re bonus