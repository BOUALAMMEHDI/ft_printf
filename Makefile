NAME = libftprintf.a

CC = gcc

CFLAG = -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_putnbr_base.c  ft_strlen.c ft_putstr.c ft_printf.c ft_putnbr.c\

all : $(NAME)

obj = $(SRCS:.c=.o)

$(NAME) : $(obj)
	$(CC) $(CFLAG) -c $(SRCS)
	ar rc $(NAME) $(obj)

clean : 
	rm -rf $(obj)

fclean : clean
	rm -rf $(NAME)

re : fclean all
