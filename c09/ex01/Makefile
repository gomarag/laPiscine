# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gann <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/18 13:32:42 by gann              #+#    #+#              #
#    Updated: 2020/06/18 16:11:14 by gann             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDES = includes
OBJS = $(SRCS:.c=.o)

${NAME} : ${OBJS}
	ar cr ${NAME} ${OBJS}

.c.o : ${SRCS}
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

all : ${NAME}

clean :
	rm -f ${OBJS}

flean: clean
	rm -f ${NAME}

re: fclean all
