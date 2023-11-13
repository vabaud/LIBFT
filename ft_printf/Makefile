# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vabaud <vabaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 16:48:50 by vabaud            #+#    #+#              #
#    Updated: 2023/11/10 23:14:08 by vabaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror

SRCS    		=	ft_printf.c \
					ft_putchar.c \
					ft_putnbr.c \
					ft_putstr.c \
					ft_putunsignednbr.c \
					ft_hexa.c \



OBJS			=	$(SRCS:.c=.o)

all: ${NAME}

${NAME}:		${OBJS}
				ar rcs $(NAME) ${OBJS}
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)	
re: fclean ${NAME}

.PHONY: all, clean, fclean, re	