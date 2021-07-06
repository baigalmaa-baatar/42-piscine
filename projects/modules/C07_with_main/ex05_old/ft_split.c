/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:07:28 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/17 14:10:06 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	**ft_build_str_array(char *str, int str_len, int output_size)
{
	char	**output;
	int		i;
	int		j;
	int		current_start;

	output = malloc((output_size + 1) * sizeof(char *));
	i = 0;
	j = 0;
	current_start = 0;
	while (i <= str_len)
	{
		if (str[i] == 0)
		{
			if (current_start < i)
				output[j++] = &str[current_start];
			current_start = i + 1;
		}
		i++;
	}
	output[j] = 0;
	return (output);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		str_len;
	char	*new_str;
	int		output_size;

	str_len = ft_strlen(str);
	new_str = malloc(str_len + 1);
	output_size = 1;
	i = 0;
	while (str[i])
	{
		if (ft_char_at(str[i], charset) != -1)
		{
			output_size++;
			new_str[i] = 0;
		}
		else
			new_str[i] = str[i];
		i++;
	}
	new_str[i] = 0;
	return (ft_build_str_array(new_str, str_len, output_size));
}
