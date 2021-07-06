SOURCES=ft_atoi.c
MAIN=do_op.c
OBJECTS=ft_atoi.o
OUTPUT=do-op

FLAGS=-Wall -Wextra -Werror

all:
	gcc $(FLAGS) -c $(SOURCES)
	gcc $(FLAGS) -o $(OUTPUT) $(MAIN) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(OUTPUT)

$(OUTPUT): all
