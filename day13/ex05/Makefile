# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamather <tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 05:31:17 by tamather          #+#    #+#              #
#    Updated: 2019/07/23 11:00:45 by tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c do_op.c ft_putchar.c ft_putnbr.c ft_putstr.c operator.c ft_strlen.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

EXEC = do-op

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