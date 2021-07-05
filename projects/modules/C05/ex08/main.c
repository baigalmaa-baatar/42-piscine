/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:14:55 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/14 14:04:34 by etran            ###   #######.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_generate_board(int board[10][10], int x, int y, int possibilities_cnt);

void	ft_initialize_board(int board[10][10])
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int board[10][10];
	int possibilities_cnt;

	possibilities_cnt = 0;
	ft_initialize_board(board);
	if (ft_generate_board(board, 0, 0, possibilities_cnt) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
