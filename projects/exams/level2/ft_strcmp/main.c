#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
  char s1[] = "aaz";
  char s2[] = "aab";

  printf("%d\n", ft_strcmp(s1, s2));
}
