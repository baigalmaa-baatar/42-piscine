/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:24:06 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/06 16:25:20 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int numbr)
{
	if (numbr < -9 || numbr > 9)
		ft_putnbr(numbr / 10);
	if (numbr < 0)
	{
		if (numbr >= -9 && numbr <= 9)
		{
			ft_putchar('-');
		}
		ft_putchar('0' - (numbr % 10));
	}
	else
	{
		ft_putchar('0' + (numbr % 10));
	}
}
