/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:40:07 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/17 13:52:46 by bbaatar          ###   ########.fr       */
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

int		ft_total_len(int size, char **strs, char *sep)
{
	int i;
	int len_total;

	len_total = 0;
	i = 0;
	while (i < size)
	{
		len_total += ft_strlen(strs[i]);
		i++;
	}
	len_total += (size - 1) * ft_strlen(sep);
	len_total += 1;
	return (len_total);
}

int		ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_str;
	char	*result;
	int		i;
	int		j;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	len_str = ft_total_len(size, strs, sep);
	result = malloc(len_str);
	i = 0;
	j = 0;
	while (i < size)
	{
		if (i > 0)
			j += ft_strcpy(&result[j], sep);
		j += ft_strcpy(&result[j], strs[i]);
		i++;
	}
	result[j] = '\0';
	return (result);
}
