#include <stdio.h>
#include <string.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

void print(char **strs) {
	int i = 0;

	while (strs[i] != 0)
		printf(" %s", strs[i++]);
	printf("\n");
}

int ft_strcmp(char *str1, char *str2) {
	return strcmp(str1, str2);
}

int main() {
	char *test1[] = {"disgusted", "confused", "join", "bashful", "want", "scarce", "tire", "untidy", "ratty", "arithmetic", "hideous", "appreciate", 0};
	char *test2[] = {"step", "fork", "suffer", "dirt", "sticky", "eatable", "can", "striped", 0};
	char *test3[] = {"step", "stepa", "step", "dirt", "sticky", "eatable", "can", "striped", 0};

	ft_advanced_sort_string_tab(test1, &ft_strcmp);
	print(test1);
	ft_advanced_sort_string_tab(test2, &ft_strcmp);
	print(test2);
	ft_advanced_sort_string_tab(test3, &ft_strcmp);
	print(test3);
}
