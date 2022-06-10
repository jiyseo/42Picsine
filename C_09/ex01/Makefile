# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 19:29:37 by jiyseo            #+#    #+#              #
#    Updated: 2021/09/29 05:08:32 by jiyseo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS	= srcs/ft_swap.c srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_strlen.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
RM		= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}
		${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
