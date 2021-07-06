#include <stdio.h>

void	ft_sort_string_tab(char **tab);

void print(char **strs) {
	int i = 0;

	while (strs[i] != 0)
		printf(" %s", strs[i++]);
	printf("\n");
}

int main() {
	char *test1[] = {"disgusted", "confused", "join", "bashful", "want", "scarce", "tire", "untidy", "ratty", "arithmetic", "hideous", "appreciate", 0};
	char *test2[] = {"step", "fork", "suffer", "dirt", "sticky", "eatable", "can", "striped", 0};
	char *test3[] = {"step", "stepa", "step", "dirt", "sticky", "eatable", "can", "striped", 0};

	ft_sort_string_tab(test1);
	print(test1);
	ft_sort_string_tab(test2);
	print(test2);
	ft_sort_string_tab(test3);
	print(test3);
}
