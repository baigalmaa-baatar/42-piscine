#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
    printf(" 11(hex) in decimal base : %s\n", ft_convert_base("      +-++--+++11", "0123456789abcdef", "0123456789"));
    printf(" 21(octal) in decimal base : %s\n", ft_convert_base("      +-++--+++21", "01234567", "0123456789"));
    printf(" 10001(binary) in decimal base : %s\n", ft_convert_base("      +-+-+-+++10001", "01", "0123456789"));
}
