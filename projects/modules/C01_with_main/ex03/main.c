#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
  int num1;
  int num2;
  int div;
  int mod;

  num1 = 17;
  num2 = 5;

  printf("%d %d\n", num1, num2);
  ft_div_mod(num1, num2, &div, &mod);
  printf("%d %d %d %d\n", num1, num2, div, mod);

}
