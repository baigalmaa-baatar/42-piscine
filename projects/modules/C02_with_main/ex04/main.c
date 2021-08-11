#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char str1[]	= "eee";
	char str2[] = "This is TEST";

	printf("The result is : %d\n", ft_str_is_lowercase(str1));
	printf("The result is : %d\n", ft_str_is_lowercase(str2));

	return (0);
}
