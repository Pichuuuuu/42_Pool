# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamather <tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/16 22:31:23 by tamather          #+#    #+#              #
#    Updated: 2019/07/18 00:15:37 by tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I includes

EXEC = libft.a

OBJS = ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


${EXEC}: 	${OBJS}
			ar rc ${EXEC} ${OBJS}


all:	${EXEC}

clean:
			rm -f  ${OBJS}

fclean:		clean
			rm -f ${EXEC}

re: fclean all
