CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDE=../includes
SRC=srcs
OUTPUT=libft.a
SRC_FILES=ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ_FILES=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	cd $(SRC) && $(CC) $(FLAGS) -I$(INCLUDE) -c $(SRC_FILES)
	cd $(SRC) && ar rc $(OUTPUT) $(OBJ_FILES)
	mv $(SRC)/$(OUTPUT) ./

clean:
	cd $(SRC) && rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

$(OUTPUT): all
