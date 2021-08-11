#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[]	= "Source";
	char dest[]	= "Destination";

	printf("Dest before the copy : %s\n", dest);
	printf("Src before the copy : %s\n\n", src);

	ft_strcpy(dest, src);

	printf("Dest after the copy :  %s\n", dest);

	return (0);
}
