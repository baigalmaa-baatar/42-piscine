/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:10:22 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/22 16:10:31 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strndup(char *src, int size)
{
	char	*dest;
	int		i;

	if (src == 0)
		return (0);
	dest = malloc(size + 1);
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

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

int		ft_count_strs(char *str, char *charset)
{
	int	count;
	int	i;
	int	curr_start;
	int str_len;

	count = 0;
	curr_start = 0;
	str_len = ft_strlen(str);
	i = 0;
	while (i <= str_len)
	{
		if (str[i] == 0 || ft_char_at(str[i], charset) != -1)
		{
			if (curr_start < i)
				count++;
			curr_start = i + 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		i;
	int		j;
	int		curr_start;
	int		str_len;

	output = malloc((ft_count_strs(str, charset) + 1) * sizeof(char *));
	str_len = ft_strlen(str);
	curr_start = 0;
	i = 0;
	j = 0;
	while (i <= str_len)
	{
		if (str[i] == 0 || ft_char_at(str[i], charset) != -1)
		{
			if (curr_start < i)
				output[j++] = ft_strndup(&str[curr_start], i - curr_start);
			curr_start = i + 1;
		}
		i++;
	}
	output[j] = 0;
	return (output);
}
