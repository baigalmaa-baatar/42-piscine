
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(int argc, char *argv[])
{
	int min;
	int max;
	int i;
	int *result;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	result = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", result[i]);
		i++;
	}
	free(ft_range(min, max));
}
