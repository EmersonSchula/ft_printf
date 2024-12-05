NAME =  libftprintf.a

SRCS =	ft_printf.c \
		ft_printf_utils.c \
		ft_puthex.c \
		ft_putupperhex.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra
CC = cc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $<

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re