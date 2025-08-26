CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

NAME = libftprintf.a

SRCS = ft_x.c ft_uns.c ft_strlen.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_ptr.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
