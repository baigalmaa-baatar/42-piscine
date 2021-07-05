/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:35:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/05/06 16:10:08 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_length_is_three(char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len == 3)
		return (1);
	return (0);
}

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int i;
	size_t cntr;

	i = 0;
	cntr = 0;
	while (i < length)
	{
		if (f(tab[i]))
			cntr++;
		i++;
	}

	return (cntr);
}