#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
  int nb;
  int power;

  nb = 1;
  power = 5;

  printf("%d\n", ft_iterative_power(nb, power));
}
