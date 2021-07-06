/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:49:36 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/06 16:10:51 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_make_numbers(int g_first, int g_second, int g_third)
{
	ft_putchar('0' + g_first);
	ft_putchar('0' + g_second);
	ft_putchar('0' + g_third);
}

void	ft_print_comb(void)
{
	int g_first;
	int g_second;
	int g_third;

	g_first = 0;
	while (g_first <= 7)
	{
		g_second = g_first + 1;
		while (g_second <= 8)
		{
			g_third = g_second + 1;
			while (g_third <= 9)
			{
				ft_make_numbers(g_first, g_second, g_third);
				if (g_first != 7)
				{
					write(1, ", ", 2);
				}
				g_third++;
			}
			g_second++;
		}
		g_first++;
	}
}
