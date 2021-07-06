#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *str;
	char *strs[100] = {
		"aaa",
		"bbb",
		"ccc",
		"111111",
	};
	str = ft_strjoin(4, strs, "@@@@");
	printf("%s\n", str);
	free(str);
	return (0);
}
