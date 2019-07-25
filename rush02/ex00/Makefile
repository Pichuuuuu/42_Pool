# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamather <tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 20:53:48 by tamather          #+#    #+#              #
#    Updated: 2019/07/21 22:55:47 by tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = affichage2.c dic_parse.c main.c ft_split.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I ./

EXEC = rush-02

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