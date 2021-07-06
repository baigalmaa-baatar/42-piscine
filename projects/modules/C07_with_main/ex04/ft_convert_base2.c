/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:03:19 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/17 14:03:23 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_skip_spaces(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ')
		i++;
	return (&(str[i]));
}

int		ft_check_base(char *base)
{
	int i;
	int j;
	int base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
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
