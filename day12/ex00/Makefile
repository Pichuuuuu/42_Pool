# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamather <tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 05:31:17 by tamather          #+#    #+#              #
#    Updated: 2019/07/18 19:46:01 by tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_display_file.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

EXEC = ft_display_file

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