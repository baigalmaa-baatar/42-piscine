/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:53:19 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/17 14:00:37 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_skip_spaces(char *str);
int		ft_check_base(char *str);
char	*ft_skip_plus_or_minus(char *str, int *negative);
int		ft_strlen(char *str);

int		ft_char_at(char ch, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == ch)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int		ft_from_x_to_dec(char *base, char *input, int *output)
{
	int base_size;
	int i;
	int digit;

	base_size = ft_strlen(base);
	i = 0;
	*output = 0;
	while (input[i])
	{
		digit = ft_char_at(input[i], base);
		if (digit == -1)
			return (0);
		*output = *output * base_size + digit;
		i++;
	}
	return (1);
}

void	ft_reverse(char *str, int size)
{
	int		left;
	int		right;
	char	tmp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

char	*ft_from_dec_to_x(char *base, int input, int negative)
{
	int		base_size;
	int		i;
	char	*output;

	output = malloc(34);
	base_size = ft_strlen(base);
	i = 0;
	while (input > 0)
	{
		output[i] = base[input % base_size];
		input /= base_size;
		i++;
	}
	if (negative)
	{
		output[i] = '-';
		i++;
	}
	ft_reverse(output, i);
	output[i] = '\0';
	return (output);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec;
	int		succeed;
	int		negative;
	char	*output;

	if (ft_check_base(base_from) != 1 || ft_check_base(base_to) != 1)
		return (0);
	nbr = ft_skip_spaces(nbr);
	nbr = ft_skip_plus_or_minus(nbr, &negative);
	succeed = ft_from_x_to_dec(base_from, nbr, &dec);
	if (succeed == 0)
		return (0);
	if (dec == 0)
	{
		output = malloc(2);
		output[0] = base_to[0];
		output[1] = '\0';
	}
	else
		output = ft_from_dec_to_x(base_to, dec, negative);
	return (output);
}
