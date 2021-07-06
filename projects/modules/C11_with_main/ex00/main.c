#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void print_number(int n) {
	printf("%d\n", n);
}

int main() {
	int test[] = {123, 456, 789};

	ft_foreach(test, 3, &print_number);
	printf("-----------\n");
	ft_foreach(test, 2, &print_number);
	printf("-----------\n");
	ft_foreach(test, 1, &print_number);
}
