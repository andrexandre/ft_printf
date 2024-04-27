NAME	=	libftprintf.a

RM	=	rm -f

SOURCES	=	ft_printf.c ft_printf_utils.c

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