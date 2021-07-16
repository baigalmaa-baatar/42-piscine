/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:58:07 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/07 14:59:27 by wmachrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_mark(int width, int height, int x, int y)
{
	if ((width == 0 && height == 0) || (width == x - 1 && height == y - 1))
	{
		if ((y == 1 && width > 1) || (x == 1 && height > 1))
			return ('C');
		return ('A');
	}
	if ((width == x - 1 && height == 0) || (width == 0 && height == y - 1))
		return ('C');
	if ((width == 0) || (height == 0) || (width == x - 1) || (height == y - 1))
		return ('B');
	return (' ');
}

void	rush04(int x, int y)
{
	int width;
	int height;

	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			ft_putchar(get_mark(width, height, x, y));
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
