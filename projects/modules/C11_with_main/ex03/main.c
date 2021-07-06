#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

int is_start_with_a(char *str) {
	if (str[0] == 'a')
		return 1;

	return 0;
}

int main() {
	char *test1[] = {"hello", "avatar", "apple", "world", "simba", "age", "movie"};
	char *test2[] = {"hello", "avatar", "world"};
	char *test3[] = {"hello", "world"};

	printf("%d\n", ft_count_if(test1, 7, &is_start_with_a));
	printf("%d\n", ft_count_if(test2, 3, &is_start_with_a));
	printf("%d\n", ft_count_if(test3, 2, &is_start_with_a));
}
