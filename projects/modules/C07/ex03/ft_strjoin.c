#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *result;

	i = 0;
	while(strs[i])
	{
		result = strs[i];
		result = sep;
		i++;
	}
return(result);
}
