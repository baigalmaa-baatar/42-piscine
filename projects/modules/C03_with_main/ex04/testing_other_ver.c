/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:23:25 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/09 11:23:50 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strlen(char *s1)
{
	int len;

	len = 0;
	while (s1[len])
	{
		len++;
	}
	return (len);
}

int		ft_is_same(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}

	if (i != n) {
		return (0);
	}

	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int str_len;
	int to_find_len;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	i = 0;

	while (i < str_len - to_find_len + 1)
	{
		if (ft_is_same(&str[i], to_find, to_find_len)) {
			return &str[i];
		}
		i++;
	}

	return (0);
}
