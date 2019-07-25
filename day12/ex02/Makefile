# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamather <tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 05:31:17 by tamather          #+#    #+#              #
#    Updated: 2019/07/22 21:23:08 by tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/main.c srcs/ft_putstr_err.c srcs/error_msg.c srcs/ft_atoi.c srcs/ft_strcmp.c srcs/ft_putstr.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

EXEC = ft_tail

OBJS = ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${EXEC}: 	${OBJS}
			${CC} ${CFLAGS} -o ${EXEC} ${OBJS} 


all:	${EXEC}

clean:
			rm -f  ${OBJS}

fclean:		clean
			rm -f ${EXEC}

re: fclean all