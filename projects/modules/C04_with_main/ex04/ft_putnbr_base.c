/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:13:04 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/25 14:13:06 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
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

void	ft_putnbr(long long nbr, int base_nb, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_nb)
		ft_putnbr(nbr / base_nb, base_nb, base);
	ft_putchar(base[nbr % base_nb]);
}

int		ft_validate_base(char *base)
{
	int i;
	int j;
	int base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (-1);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
				|| base[i] == '\r' || base[i] == '\t' || base[i] == '\v'
				|| base[i] == '+' || base[i] == '-')
			return (-1);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j++])
				return (-1);
		}
		i++;
	}
	return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = ft_validate_base(base);
	if (base_len == -1)
	{
		return ;
	}
	ft_putnbr(nbr, base_len, base);
}
