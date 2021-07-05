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

int	ft_print_result(int lines[92][10])
{
	int i;
	int j;

	i = 0;
	while (i < 92)
	{
		j = 0;
		while (j < 10)
		{
			ft_putchar(lines[i][j] + '0');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return(0);
}
