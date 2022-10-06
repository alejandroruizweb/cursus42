# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 09:52:31 by alruiz-c          #+#    #+#              #
#    Updated: 2022/10/04 18:29:29 by alruiz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES = ./libft.h

SRC_PART1 = \
	./ft_isalpha.c 	\
	./ft_isdigit.c 	\
	./ft_isalnum.c 	\
	./ft_isascii.c 	\
	./ft_isprint.c 	\
	./ft_strlen.c 	\
	./ft_memset.c 	\
	./ft_bzero.c 	\
	./ft_memcpy.c	\
	./ft_memmove.c 	\
	./ft_strlcpy.c 	\
	./ft_strlcat.c 	\
	./ft_toupper.c 	\
	./ft_tolower.c 	\
	./ft_strchr.c 	\
	./ft_strrchr.c 	\
	./ft_strncmp.c 	\
	./ft_memchr.c 	\
	./ft_memcmp.c 	\
	./ft_strnstr.c 	\
	./ft_atoi.c 	\

	
SRCS = \
	$(SRC_PART1)	\
	
OBJS = $(SRCS:.c=.o)

all : $(NAME)

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: all clean fclean re