/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmachrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:34:36 by wmachrou          #+#    #+#             */
/*   Updated: 2021/02/07 14:41:07 by wmachrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_mark(int width, int height, int x, int y)
{
	if ((width == 0 && height == 0) || (width == 0 && height == y - 1)
	|| (width == x - 1 && height == 0) || (width == x - 1 && height == y - 1))
	{
		return ('o');
	}
	if ((width == 0) || (width == x - 1))
	{
		return ('|');
	}
	if ((height == 0) || (height == y - 1))
	{
		return ('-');
	}
	return (' ');
}

void	rush00(int x, int y)
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
