/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:14:55 by bbaatar           #+#    #+#             */
/*   Updated: 2021/07/06 15:52:19 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_get_numbers(char *str, int *result);
int		ft_generate_board(int board[4][4], int x, int y, int input[16]);

void	ft_initialize_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	board[4][4];
	int	tab[16];

	if (argc != 2 || ft_get_numbers(argv[1], tab) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_initialize_board(board);
	if (ft_generate_board(board, 0, 0, tab) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
