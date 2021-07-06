#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src_s[]	= "Source\n";
	char dest_s[]	= "Destination\n";

  printf("dest : %p\n", &src_s);
  printf("src : %p\n", &dest_s);

  ft_strcpy(dest_s, src_s);

	printf(" %s ", dest_s);

	return (0);
}
