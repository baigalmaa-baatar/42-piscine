/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:35:46 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/17 13:48:14 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *result;
	int number_of_elements;

	if (max <= min)
	{
		result = NULL;
		return (0);
	}
	number_of_elements = max - min;
	if (!(result = malloc((number_of_elements) * sizeof(int))))
	{
		return (-1);
	}
	i = min;
	j = 0;
	while (i < max)
	{
		result[j] = i;
		i++;
		j++;
	}
	*range = result;
	return (number_of_elements);
}
