#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(int argc, char *argv[])
{

	char *src = argv[1];
	char *dest = ft_strdup(src);
	(void)argc;

	printf("%s\n", dest);
	printf("%p - %p\n", src, dest);
	free(dest);
}
