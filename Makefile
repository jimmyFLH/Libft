# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:32:50 by jboucher          #+#    #+#              #
#    Updated: 2022/10/26 18:44:54 by jboucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS  = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c\
		 ft_substr
OBJS   = ${SRCS:.c=.o}

NAME   = libft.a

CC     = gcc

CFLAGS = -Wall -Wextra -Werror

all    : ${NAME}

${NAME}: ${OBJS}
				@ar -rcs  ${NAME} ${OBJS}

clean  :  
				@rm -f ${OBJS}

fclean : clean
				@rm -f ${NAME}

re     : fclean all
