/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 08:15:03 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/16 08:17:11 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(char **tab, int size)
{
	int i;
	int j;
	int min_index;

	i = 0;
	while (i < size)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[min_index]) <= 0)
			{
				min_index = j;
			}
			j++;
		}
		ft_swap(&tab[i], &tab[min_index]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int size;

	size = argc - 1;
	ft_sort_int_tab(&argv[1], size);
	i = 1;
	while (i <= size)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
