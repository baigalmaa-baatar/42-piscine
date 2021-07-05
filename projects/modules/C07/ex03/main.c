#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char *argv[])
{
	char *str;
	char *strs[3] = {"nana" "lala" "nono"};
	int size = 3;
	char *sep = "_";
	// int min;
	// int max;
	// int i;
	// int *result;
	// int range_size;
	//
	// min = atoi(argv[1]);
	// max = atoi(argv[2]);
	//

	str = ft_strjoin(size, strs, sep);
	printf("%s\n", str);
	free(str);
}
