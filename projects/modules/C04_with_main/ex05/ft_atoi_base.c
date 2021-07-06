/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:13:14 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/25 14:13:16 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_skip_spaces(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
				|| str[i] == '\t' || str[i] == '\v')
		i++;
	return (&(str[i]));
}

char	*ft_skip_plus_or_minus(char *str, int *negative)
{
	int i;
	int minus_count;

	i = 0;
	minus_count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			minus_count++;
		}
		i++;
	}
	if (minus_count % 2 == 0)
		*negative = 0;
	else
		*negative = 1;
	return (&(str[i]));
}

int		ft_validate_base(char *base)
{
	int i;
	int j;
	int base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (-1);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
				|| base[i] == '\r' || base[i] == '\t' || base[i] == '\v'
				|| base[i] == '+' || base[i] == '-')
			return (-1);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j++])
				return (-1);
		}
		i++;
	}
	return (base_len);
}

int		ft_index(char *base, char ch)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int index;
	int base_len;
	int result;
	int negative;

	base_len = ft_validate_base(base);
	if (base_len == -1)
		return (0);
	str = ft_skip_spaces(str);
	str = ft_skip_plus_or_minus(str, &negative);
	result = 0;
	i = 0;
	while (str[i] && (index = ft_index(base, str[i])) != -1)
	{
		result = result * base_len + index;
		i++;
	}
	if (negative == 1)
		result *= -1;
	return (result);
}
