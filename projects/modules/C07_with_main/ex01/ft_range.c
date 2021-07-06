/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:34:23 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/16 14:35:23 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *tab;
	int number_of_elements;

	if (max <= min)
		return (0);
	number_of_elements = max - min;
	tab = malloc((number_of_elements) * sizeof(int));
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
