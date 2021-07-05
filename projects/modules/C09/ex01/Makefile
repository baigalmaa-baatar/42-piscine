# cc=GCC
# SRCS=srcs
# INCLUDE=../includes
# FLAGS=-Wall -Wextra -Werror
# OUTPUT=libft.a
# SRC_FILES=ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
# OBJ_FILES=ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# all:
# 	cd $(SRCS) && $(CC) $(FLAGS) -I$(INCLUDE) -c $(SRC_FILES)
# 	cd $(SRCS) && ar rc $(OUTPUT) $(OBJ_FILES)
# 	mv $(SRCS)/$(OUTPUT) .

# clean: 
# 	cd $(SRCS) && rm -f $(OBJ_FILES)

# fclean:clean
# 	rm -f $(OUTPUT)

# re:fclean all

# $(OUTPUT): all
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all