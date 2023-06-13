NAME 	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
SRC_DIR	= ./srcs/
OBJ_DIR	= ./obj/

SRCS	=	push_swap.c utils_push_swap.c init.c ordenation.c comands_1.c comands_2.c comands_3.c algorithm.c algorithm2.c
SRCB 	= 	
OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
OBJB	= $(addprefix $(OBJ_DIR), $(SRCB:.c=.o))


all: lib obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@$(CC) $(CFLAGS) -I ./libft/ -o $@ -c $<

$(NAME): $(OBJS) 
	@echo "\033[0;32mCompiling push_swap . . ."
	@$(CC) $(CFLAGS) $(OBJS) -L ./libft -l ft -o $(NAME)
	@echo "\033[0;32mOk."

lib:
	@make -C ./libft --silent

clean:
	@echo "\033[0;31mDeleting objects... "
	@rm -rf $(OBJ_DIR) $(OBJBDIR)
	@make -C libft/ clean --silent
	@echo "\033[0;32mOK."

fclean:
	@echo "\033[0;31mDeleting objects..."
	@make -C libft/ fclean --silent
	@rm -rf $(OBJ_DIR) $(OBJBDIR)
	@echo "Deleting executable..."
	@rm -f $(NAME)
	@echo "\033[0;32mOk."

re:	fclean all

bonus: lib obj $(OBJB)
	@echo "\033[0;32mCompiling push_swap ( with bonus ). . ."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJB) -L ./libft -l ft
	@echo "\033[0;32mOk."

.phony:	clean fclean all re bonus
