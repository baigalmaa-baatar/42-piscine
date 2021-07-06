#include <string.h>
#include <stdio.h>
#include <stdlib.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
  char s1[] = "asaa";
  char s2[] = "42dfgd l33";

  char s3[] = "asaa";
  char s4[] = "42dfgd l33";

  printf("This is my function : %u\n", ft_strlcat(s1, s2, 4));
  printf("This is strlcat function : %lu\n", strlcat(s3, s4, 4));
}
