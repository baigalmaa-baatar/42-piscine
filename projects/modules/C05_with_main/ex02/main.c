#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
  int nb;
  int power;

  nb = 2;
  power = 3;

  printf("%d\n", ft_iterative_power(nb, power));
}
