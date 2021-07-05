#include <string.h>
#include <stdio.h>
#include <stdlib.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
  char s1[] = "AB\0\0SD";
  char s2[] = "ZZZ";

  printf("This is my function : %u\n", ft_strlcat(s1, s2, 6));
  printf("This is strlcat function : %lu\n", strlcat(s1, s2, 6));
}
