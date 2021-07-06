#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
    printf(" 11(hex) in decimal base : %s\n", ft_convert_base("", "0123456789abcdef", "0123456789"));
    printf(" 21(octal) in decimal base : %s\n", ft_convert_base("-", "01234567", "0123456789"));
    printf(" 10001(binary) in decimal base : %s\n", ft_convert_base("-0", "01", "0123456789"));
    printf(" 10001(binary) in decimal base : %s\n", ft_convert_base("0", "01", "0123456789"));
    printf(" 10 in decimal base : %s\n", ft_convert_base("10", "0123456789", "0123456789"));
    printf("Should be error in decimal base : %s\n", ft_convert_base("10", "0023456789", "0123456789"));
    printf("Should be error in decimal base : %s\n", ft_convert_base("10", "0123456789", "0023456789"));
    printf("Should be error in decimal base : %s\n", ft_convert_base("10", " 123456789", "0123456789"));
    printf("Should be error in decimal base : %s\n", ft_convert_base("10", "0123456789", "0+23456789"));
    printf("Should be error in decimal base : %s\n", ft_convert_base("10", "0123-56789", "0123456789"));
}
