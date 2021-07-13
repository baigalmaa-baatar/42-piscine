/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:58:07 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/07 12:37:38 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_mark(int width, int height, int x, int y)
{
	if ((width == 0 && height == 0) || (width == 0 && height == y - 1))
	{
		return ('A');
	}
	if ((width == x - 1 && height == 0) || (width == x - 1 && height == y - 1))
	{
		return ('C');
	}
	if ((width == 0) || (height == 0) || (width == x - 1) || (height == y - 1))
	{
		return ('B');
	}
	return (' ');
}

void	rush03(int x, int y)
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
