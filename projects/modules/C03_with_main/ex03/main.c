#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
  char s1[100] = "hello";
  char s2[100] = "world";
  char s3[100] = "hello";
  char s4[100] = "world";

  printf("%s\n", ft_strncat(s1, s2, 4));
  printf("%s\n\n", strncat(s3, s4, 4));

  printf("%s\n", ft_strncat(s1, s2, 5));
  printf("%s\n\n", strncat(s3, s4, 5));

  printf("%s\n", ft_strncat(s1, s2, 1));
  printf("%s\n\n", strncat(s3, s4, 1));

  printf("%s\n", ft_strncat(s1, s2, 0));
  printf("%s\n\n", strncat(s3, s4, 0));

  printf("%s\n", ft_strncat(s1, s2, 50));
  printf("%s\n\n", strncat(s3, s4, 50));
}
