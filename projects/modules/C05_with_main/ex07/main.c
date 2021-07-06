#include <stdio.h>
#include <string.h>

int ft_find_next_prime(int nb);

int main(void)
{
  int nb[8];
  int i;
  i = 0;

  // -1137 -> 2$
  // 0 -> 2$
  // 1 -> 2$
  // 2 -> 2$
  // 2147483643 -> 2147483647$
  // 2147483645 -> 2147483647$
  // 2147483646 -> 2147483647$
  // 2147483647 -> 2147483647$

  nb[0] = -1137;
  nb[1] = 0;
  nb[2] = 1;
  nb[3] = 2;
  nb[4] = 2147483643;
  nb[5] = 2147483645;
  nb[6] = 2147483646;
  nb[7] = 2147483647;

  while (i < 8)
  {
    printf("%d\n", ft_find_next_prime(nb[i]));
    i++;
  }
}
