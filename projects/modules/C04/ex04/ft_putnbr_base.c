#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr, int base_nb)
{
	int	minus_sign;

	minus_sign = 1;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_nb)
		ft_putnbr(nbr / base_nb, base_nb);
	if (base_nb == 16)
		if (nbr % base_nb >= 10)
			ft_putchar(nbr % base_nb - 10 + 'a');
		else
			ft_putchar(nbr % base_nb + '0');
	else
		ft_putchar(nbr % base_nb + '0');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_nb;
	int	i;
	int	j;

	if (ft_strlen(base) > 1)
	{
		i = 0;
		while (base[i])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					break ;
				j++;
			}
			if (base[i] == '+' || base[i] == '-')
				break ;
			i++;
		}
		ft_putnbr(nbr, ft_strlen(base));
	}
}
