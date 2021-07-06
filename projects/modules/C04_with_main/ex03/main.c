#include <stdio.h>

int ft_atoi(char *str);

int main(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		printf("%d\n", ft_atoi(argv[i]));
	}
}
