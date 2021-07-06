#include <stdio.h>
#include <string.h>

int ft_fibonacci(int index);

int main(void)
{
  int index;
//Fibonacci index:
// 0 : 0
// 1 : 1
// 2 : 1
// 3 : 2
// 4 : 3
// 5 : 5
// 6 : 8
// 7 : 13
// 8 : 21
// 9 : 34
// 10 : 55
// 11 : 89
// 12 : 144
// 13 : 233
// 14 : 377
// 15 : 610
// 16 : 987

  index = 16;

  printf("%d\n", ft_fibonacci(index));
}
