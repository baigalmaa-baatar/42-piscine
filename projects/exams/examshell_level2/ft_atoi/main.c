#include <stdio.h>

int	ft_atoi(const char *str);

int		main(void)
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));
}