/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:48:13 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/09 11:56:35 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hex_value(unsigned char decimal_nbr, char hex[])
{
	if (decimal_nbr / 16 < 10)
	{
		hex[0] = '0' + decimal_nbr / 16;
	}
	else
	{
		hex[0] = 'a' + (decimal_nbr / 16 - 10);
	}
	if (decimal_nbr % 16 < 10)
	{
		hex[1] = '0' + decimal_nbr % 16;
	}
	else
	{
		hex[1] = 'a' + (decimal_nbr % 16 - 10);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			dec_to_hex_value(str[i], hex);
			ft_putchar('\\');
			ft_putchar(hex[0]);
			ft_putchar(hex[1]);
		}
		i++;
	}
}
