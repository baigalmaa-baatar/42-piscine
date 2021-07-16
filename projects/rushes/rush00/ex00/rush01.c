/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_universal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:24:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/07 12:37:03 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

char	get_mark(int x, int y, int width, int height)
{
	if (width == 0 && height == 0)
	{
		return ('/');
	}
	if (width == 0 && height == y - 1)
	{
		return ('\\');
	}
	if (width == x - 1 && height == 0)
	{
		return ('\\');
	}
	if (width == x - 1 && height == y - 1)
	{
		return ('/');
	}
	if ((height == 0) || (height == y - 1))
	{
		return ('*');
	}
	if ((width == 0) || (width == x - 1))
	{
		return ('*');
	}
	return (' ');
}

void	rush01(int x, int y)
{
	int width;
	int height;

	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			ft_putchar(get_mark(x, y, width, height));
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
