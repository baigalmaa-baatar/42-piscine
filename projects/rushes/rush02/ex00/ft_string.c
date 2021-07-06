/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnevoa-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:13:23 by gnevoa-p          #+#    #+#             */
/*   Updated: 2021/07/06 16:19:06 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_string.h"

t_string	ft_string_new(void)
{
	t_string	str;

	str.size = 0;
	str.capacity = 10;
	str.data = malloc(str.capacity);
	str.data[0] = '\0';
	return (str);
}

void	ft_string_delete(t_string *str)
{
	free(str->data);
}

void	ft_string_append_char(t_string *str, char ch)
{
	char	*new_data;
	int		i;
	int		free_space;

	free_space = str->capacity - (str->size + 1);
	if (free_space < 1)
	{
		str->capacity *= 2;
		new_data = malloc(str->capacity);
		i = 0;
		while (i <= str->size)
		{
			new_data[i] = str->data[i];
			i++;
		}
		free(str->data);
		str->data = new_data;
	}
	str->data[str->size] = ch;
	str->size++;
	str->data[str->size] = '\0';
}

void	ft_string_append_str(t_string *str, char *chs)
{
	int	i;

	i = 0;
	while (chs[i])
	{
		ft_string_append_char(str, chs[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
