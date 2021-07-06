#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *output;

	output = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}
