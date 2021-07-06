/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:33:17 by etran             #+#    #+#             */
/*   Updated: 2021/07/06 15:48:38 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter_numbers;

	counter_numbers = 0;
	while (str[counter_numbers] != '\0')
		counter_numbers++;
	if (counter_numbers != 31)
		return (0);
	return (counter_numbers);
}

int	ft_get_numbers(char *str, int *tab)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (0);
		}
		else
		{
			if (str[i] >= '1' && str[i] <= '4')
				tab[i / 2] = (str[i] - '0');
			else
				return (0);
		}
		i++;
	}
	return (1);
}
