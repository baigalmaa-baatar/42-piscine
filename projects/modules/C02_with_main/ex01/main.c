#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src_s[]	= "Source\n";
	char dest_s[]	= "Destination\n";
	int n = 8;

  // printf("dest : %p\n", &src_s);
  // printf("src : %p\n", &dest_s);

  ft_strncpy(dest_s, src_s, n);
	printf(" %s ", dest_s);

	return (0);
}
