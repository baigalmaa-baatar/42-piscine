/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:23:17 by etran             #+#    #+#             */
/*   Updated: 2021/02/14 12:44:34 by etran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify_backslash(int board[10][10], int x, int y)
{
	int i;

	i = 1;
	while (i <= x || i <= y)
	{
		if (board[y - i][x - i] != 0)
			return(0);
		i++;
	}
	return (1);
}

int	ft_verify_horizontal(int board[10][10], int x, int y)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (board[y][i] != 0)
			return(0);
		i++;
	}
	return (1);
}

int	ft_verify_slash(int board[10][10], int x, int y)
{
	int i;

	i = 1;
	while (i <= x || i <= y)
	{
		if (board[y + i][x - i] != 0)
			return(0);
		i++;
	}
	return (1);
}

int	ft_verify(int board[10][10], int x, int y)
{
	if (ft_verify_backslash(board, x, y) &&
		ft_verify_horizontal(board, x, y) &&
		ft_verify_slash(board, x, y))
		return (1);
	return (0);
}
