/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_board.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:56:48 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/14 14:04:09 by etran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_verify(int board[10][10], int x, int y);
int		ft_print_result(int lines[92][10]);

int		ft_next_x(int x, int y)
{
	if (y < 9)
		return (x + 1);
	else
		return (0);
}

int		ft_next_y(int y)
{
	if (y < 9)
		return (y + 1);
	else
		return (0);
}

int		ft_generate_board(int board[10][10], int x, int y, int possibilities_cnt)
{
	int i;
	int next_x;
	int next_y;
	int lines[92][10];

	if (possibilities_cnt > 2)
		return (ft_print_result(lines));
	next_x = ft_next_x(x, y);
	next_y = ft_next_y(y);
	i = 0;
	while (i <= 9)
	{
		if (ft_verify(board, x, y) == 1)
		{
			lines[possibilities_cnt][i] = y;
			board[y][x] = 1;
			if (x == 9)
				possibilities_cnt++;
			// printf("%d, %d, %d\n", board[x][y], x, y);
			printf("%d\n", lines[0][0]);
			if (ft_generate_board(board, next_x, next_y, possibilities_cnt) == 1)
				return (1);
		}
		i++;
	}
	board[y][x] = 0;
	return (0);
}
