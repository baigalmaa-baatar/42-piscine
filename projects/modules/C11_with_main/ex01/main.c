#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int power_of_2(int n) {
	return n * n;
}

int main() {
	int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *result;

	result = ft_map(test, 9, &power_of_2);
	for (int i = 0; i < 9; i++) {
		printf("%d\n", result[i]);
	}
}
