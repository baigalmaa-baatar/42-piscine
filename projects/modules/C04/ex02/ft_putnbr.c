/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 14:05:42 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/11 14:06:10 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int input_numbr)
{
	if (input_numbr < -9 || input_numbr > 9)
	{
		ft_putnbr(input_numbr / 10);
	}
	if (input_numbr < 0)
	{
		if (input_numbr >= -9 && input_numbr <= 9)
		{
			ft_putchar('-');
		}
		ft_putchar('0' - (input_numbr % 10));
	}
	else
	{
		ft_putchar('0' + (input_numbr % 10));
	}
}
