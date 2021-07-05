#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *result;
	int number_of_elements;

	if (max <= min)
		return -1;
	number_of_elements = max - min;
	result = malloc((number_of_elements)*sizeof(int));
	i = min;
	j = 0;
	while(i < max)
	{
		result[j] = i;
		i++;
		j++;
	}
	*range = result;
	return(number_of_elements);
}
