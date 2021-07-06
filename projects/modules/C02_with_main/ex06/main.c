#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char str[]	= "aa\1aa";

	printf(" %d ", ft_str_is_printable(str));

	return (0);
}
