#include <stdio.h>
#include	<string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int dest_size);

int main(void)
{
	char src_s[]	= "Source";
	char dest_s[]	= "Destination";
	char src[]	= "Source";
	char dest[]	= "Destination";

	int dest_size = 7;

	printf("My function: %u , %s\n", ft_strlcpy(dest_s, src_s, dest_size), dest_s);
	printf("Standard function: %lu, %s\n", strlcpy(dest, src, dest_size), dest);

	return (0);
}
