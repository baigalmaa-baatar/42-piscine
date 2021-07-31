#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char str[3]	= "123";

	printf(" %d ", ft_str_is_numeric(str));

	return (0);
}
