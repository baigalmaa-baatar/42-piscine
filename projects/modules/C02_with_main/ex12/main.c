#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main()
{
	char *test = "Hihihihih hahahahahhah ahhshdlskadfh ";
	ft_print_memory(test, 100);

	return 0;
}
