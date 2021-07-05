#include "header_putnbr.h"

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

int	main(int argc, char *argv[])
{
	(void)argc;
	ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
	return (0);
}