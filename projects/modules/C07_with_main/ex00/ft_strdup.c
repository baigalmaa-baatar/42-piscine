/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:32:16 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/16 14:34:01 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len_src;
	char	*dest;
	int		i;

	len_src = ft_strlen(src);
	dest = malloc(len_src + 1);
	if (src == NULL)
		return (NULL);
	i = 0;
	while (i < len_src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len_src] = '\0';
	return (dest);
}
