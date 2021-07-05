#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(int argc, char *argv[])
{
	int min;
	int max;
	int i;
	int *result;
	int range_size;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	range_size = ft_ultimate_range(&result, min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", result[i]);
		i++;
	}
	printf("size is %d\n", range_size);
	free(result);
}
