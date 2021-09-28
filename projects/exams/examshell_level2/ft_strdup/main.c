#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(void)
{
	char *src = "hello";
	char *dest;

	dest = ft_strdup(src);
	printf("%s\n", dest);
	free(dest);
}