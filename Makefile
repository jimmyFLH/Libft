# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:32:50 by jboucher          #+#    #+#              #
#    Updated: 2022/10/19 17:57:23 by jboucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a 

SRCS	= ft_strlcpy.c ft_strlen.c

OBJS	= ${SRCES:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

all 	: ${NAME}

${NAME}: ${OBJET}
				ar -rcs	${NAME} ${OBJS}
				
clean :
				rm -f ${OBJS}
fclean : clean	
				rm -f ${NAME}
re:		fclean all														
