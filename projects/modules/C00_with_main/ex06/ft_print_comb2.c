/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:11:31 by bbaatar           #+#    #+#             */
/*   Updated: 2021/08/05 17:19:25 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print2digits(int first_number, int second_number)
{
	ft_putchar('0' + first_number / 10);
	ft_putchar('0' + first_number % 10);
	ft_putchar(' ');
	ft_putchar('0' + second_number / 10);
	ft_putchar('0' + second_number % 10);
	if (first_number != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int first_number;
	int second_number;

	first_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			print2digits(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}
