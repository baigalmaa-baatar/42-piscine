/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acerdan <marvin@42.fr>                       +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:32:28 by acerdan             #+#    #+#           */
/*   Updated: 2021/02/14 12:32:49 by bbaatar            ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_board(int board[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (j > 0)
				ft_putchar(' ');
			ft_putchar(board[i][j] + '0');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
