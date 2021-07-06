#include <unistd.h>
#include "ft_atoi.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void	ft_putnbr_with_new_line(int nbr)
{
	ft_putnbr(nbr);
	ft_putchar('\n');
}

int		ft_validate_args(int arg2, char *operator)
{
	if (arg2 != 0)
		return (1);
	if (operator[0] == '/' && operator[1] == '\0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (operator[0] == '%' && operator[1] == '\0')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int arg1;
	int arg2;

	if (argc != 4)
		return (1);
	arg1 = ft_atoi(argv[1]);
	arg2 = ft_atoi(argv[3]);
	if (ft_validate_args(arg2, argv[2]) == 0)
		return (1);
	if (argv[2][0] == '+' && argv[2][1] == '\0')
		ft_putnbr_with_new_line(arg1 + arg2);
	else if (argv[2][0] == '-' && argv[2][1] == '\0')
		ft_putnbr_with_new_line(arg1 - arg2);
	else if (argv[2][0] == '*' && argv[2][1] == '\0')
		ft_putnbr_with_new_line(arg1 * arg2);
	else if (argv[2][0] == '/' && argv[2][1] == '\0')
		ft_putnbr_with_new_line(arg1 / arg2);
	else if (argv[2][0] == '%' && argv[2][1] == '\0')
		ft_putnbr_with_new_line(arg1 % arg2);
	else
		ft_putnbr_with_new_line(0);
	return (0);
}
