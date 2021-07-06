#include <unistd.h>

void	ft_print_combn(int digit);

int		main(void)
{
  int i;

  i = 1;
  while(i < 10)
  {
    ft_print_combn(i);
    write(1, "\n", 1);
    i++;
  }
  return (0);
}
