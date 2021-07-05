#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
  char s1[] = "acdbdbcaaa";
  char s2[] = "aaaa";

  printf("%s\n", ft_strstr("hello world", "hello"));
  printf("%s\n\n", strstr("hello world", "hello"));

  printf("%s\n", ft_strstr("hello world", "ello"));
  printf("%s\n\n", strstr("hello world", "ello"));

  printf("%s\n", ft_strstr("hello world", " "));
  printf("%s\n\n", strstr("hello world", " "));

  printf("%s\n", ft_strstr("hello world", "w"));
  printf("%s\n\n", strstr("hello world", "w"));

  printf("%s\n", ft_strstr("hello world", "ld"));
  printf("%s\n\n", strstr("hello world", "ld"));

  printf("%s\n", ft_strstr("hello world", "d"));
  printf("%s\n\n", strstr("hello world", "d"));

  printf("%s\n", ft_strstr("hello world", ""));
  printf("%s\n\n", strstr("hello world", ""));

  printf("%s\n", ft_strstr("", "hello"));
  printf("%s\n\n", strstr("", "hello"));
}
