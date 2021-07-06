#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
  char s1[] = "aaqqq";
  char s2[] = "bbbbcc";

  printf("%s\n", ft_strcat(s1, s2));
}
