#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
  int i;
  i = 0;

  printf("ft dest : %p\n", &src);
  printf("ft src : %p\n", &dest);

  while(src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return(dest);
}
