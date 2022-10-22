# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimmyfleisch <jimmyfleisch@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 14:28:22 by jimmyfleisc       #+#    #+#              #
#    Updated: 2022/10/19 21:25:06 by jimmyfleisc      ###   ########.fr        #
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