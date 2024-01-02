NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_get_hexa_printf.c ft_putnbr_printf.c ft_putchar_printf.c ft_putstr_printf.c ft_print_pointer_adress.c

OBJ = $(SRC:.c=.o)

HEAD = ft_printf.h

all : $(NAME)

$(NAME):$(OBJ)
	ar -rsc $(NAME) $(OBJ)

%.o:%.c $(HEAD)
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 
