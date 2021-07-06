#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
  int num1;
  int num2;

  num1 = 5;
  num2 = 10;

  printf("%d %d\n", num1, num2);
  ft_swap(&num1, &num2);
  printf("%d %d\n", num1, num2);
}
