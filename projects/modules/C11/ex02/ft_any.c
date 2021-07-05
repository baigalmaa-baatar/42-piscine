/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:35:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/05/06 15:40:40 by bbaatar          ###   ########.fr       */
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
		return(1);
	return (0);
}

int	ft_any(char **tab, int (*f)(char *))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return(1);
		i++;
	}

	return (0);
}