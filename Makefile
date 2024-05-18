# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 16:38:39 by qalpesse          #+#    #+#              #
#    Updated: 2024/04/25 23:44:46 by qalpesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c \
		display/display_c.c display/display_di.c display/display_p.c display/display_percent.c \
		display/display_s.c display/display_u.c display/display_xX.c
					
OBJS	= ${SRCS:.c=.o}

INCS	= printf.h
NAME	= libftprintf.a
LIBC	= ar -rcs
CC		= gcc
RM 		= rm -f
CFLAGS 	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}:  ${OBJS}
	${LIBC} ${NAME} ${OBJS}


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}


clean:
	${RM} ${OBJS}
	${RM} libft/*.o

fclean: clean
	${RM} ${NAME}
	${RM} libft/libft.a

re: fclean all
