#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int compare(int a, int b) {
	return a - b;
}

int main() {
	int test1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int test2[] = {1, 2, 2, 2, 3};
	int test3[] = {3, 2, 1};
	int test4[] = {1, 2, 3, 2};

	printf("%d\n", ft_is_sort(test1, 9, &compare));
	printf("%d\n", ft_is_sort(test2, 5, &compare));
	printf("%d\n", ft_is_sort(test3, 3, &compare));
	printf("%d\n", ft_is_sort(test4, 4, &compare));
}
