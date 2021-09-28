#include <stdio.h>

int max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int highest = -2147482648;
	unsigned int i = 0;
	while (i < len)
	{
		if (tab[i] > highest)
			highest = tab[i];
		i++;
	}
	return (highest);
}