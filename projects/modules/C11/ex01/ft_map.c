/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:35:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/05/06 15:40:28 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_square(int x)
{
	return (x * x);
}

int *ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	if (!(res = (int *)malloc(sizeof(int) * length)))
		return(0);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return(res);
}