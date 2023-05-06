# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: analexan <analexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 13:29:52 by elraira-          #+#    #+#              #
#    Updated: 2023/05/06 13:35:38 by analexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

RM	=	rm -f

SOURCES	=	ft_printf.c ft_putchar_c.c ft_putnbr_c.c ft_putstr_c.c

OBJECTS	= $(SOURCES:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
	ar -rcs $(NAME) $(OBJECTS)

%.c : %.o	cc -Wall -Wextra -Werror -c $< -o $@

clean:
		$(RM) $(OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all
	
lt:
	@ar -t $(NAME)

e: fclean

.PHONY:	all clean fclean re