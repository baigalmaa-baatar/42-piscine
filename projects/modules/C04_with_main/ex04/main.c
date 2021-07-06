#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);
int	ft_strlen(char *str);

int	ft_atoi(char *str)
{
	int i;
	int len;
	int nbr;
	int minus_sign;

	i = 0;
	minus_sign = 1;
	len = ft_strlen(str);
	if (str[0] == '-')
	{
		minus_sign = -1;
		i += 1;
	}
	nbr = 0;
	while (i < len)
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (minus_sign * nbr);
}

int	main()
{
	ft_putnbr_base(-2147483647, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-0, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(0, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(54656131, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");

	return (0);
}
