#include <stdio.h>
#include <string.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
  int nb;
  int power;

  nb = 1;
  power = -5;

  printf("%d\n", ft_recursive_power(nb, power));
}
