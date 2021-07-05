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

int		ft_verify(int board[4][4], int tab[16]);
void	ft_print_board(int board[4][4]);

void	ft_get_candidates(int board[4][4], int x, int y, int *candidates)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		candidates[i] = 1;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (board[i][x] != 0)
			candidates[board[i][x]] = 0;
		if (board[y][i] != 0)
			candidates[board[y][i]] = 0;
		i++;
	}
}

int		ft_verify_then_print_board(int board[4][4], int input[16])
{
	if (ft_verify(board, input) == 1)
	{
		ft_print_board(board);
		return (1);
	}
	return (0);
}

int		ft_next_x(int x)
{
	if (x < 3)
		return (x + 1);
	else
		return (0);
}

int		ft_next_y(int x, int y)
{
	if (x < 3)
		return (y);
	else
		return (y + 1);
}

int		ft_generate_board(int board[4][4], int x, int y, int input[16])
{
	int candidates[5];
	int i;
	int next_x;
	int next_y;

	if (x == 0 && y == 4)
		return (ft_verify_then_print_board(board, input));
	next_x = ft_next_x(x);
	next_y = ft_next_y(x, y);
	ft_get_candidates(board, x, y, candidates);
	i = 1;
	while (i <= 4)
	{
		if (candidates[i] != 0)
		{
			board[y][x] = i;
			if (ft_generate_board(board, next_x, next_y, input) == 1)
				return (1);
		}
		i++;
	}
	board[y][x] = 0;
	return (0);
}
