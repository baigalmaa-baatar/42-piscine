#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

int is_start_with_a(char *str) {
	if (str[0] == 'a')
		return 1;

	return 0;
}

int main() {
	char *test1[] = {"hello", "avatar", "apple", "world", "simba", "age", "movie", 0};
	char *test2[] = {"hello", "avatar", "world", 0};
	char *test3[] = {"hello", "world", 0};

	printf("%d\n", ft_any(test1, &is_start_with_a));
	printf("%d\n", ft_any(test2, &is_start_with_a));
	printf("%d\n", ft_any(test3, &is_start_with_a));
}
