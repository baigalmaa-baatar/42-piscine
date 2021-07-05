/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnevoa-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:13:03 by gnevoa-p          #+#    #+#             */
/*   Updated: 2021/02/21 17:13:05 by gnevoa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ft_string.h"
#include "ft_dictionary.h"

char	*ft_complement(char *nbr)
{
	int		i;
	int		nbr_len;
	int		complement_len;
	char	*complemented_nbr;

	complement_len = 0;
	nbr_len = ft_strlen(nbr);
	if (nbr_len % 3 == 1)
		complement_len = 2;
	else if (nbr_len % 3 == 2)
		complement_len = 1;
	complemented_nbr = malloc(complement_len + nbr_len);
	i = 0;
	while (i < complement_len)
		complemented_nbr[i++] = '0';
	i = 0;
	while (i < nbr_len)
	{
		complemented_nbr[complement_len + i] = nbr[i];
		i++;
	}
	return (complemented_nbr);
}

int		ft_calculate_2(t_string *str, char *nbr)
{
	if (nbr[0] == '0' && nbr[1] == '0')
		return (1);
	if (str->size > 0)
		ft_string_append_str(str, " ");
	if (nbr[0] < '2')
	{
		if (!g_small_dict[(nbr[0] - '0') * 10 + (nbr[1] - '0')])
			return (0);
		ft_string_append_str(str,
			g_small_dict[(nbr[0] - '0') * 10 + (nbr[1] - '0')]);
		return (1);
	}
	if (!g_small_dict[(nbr[0] - '0') * 10])
		return (0);
	ft_string_append_str(str, g_small_dict[(nbr[0] - '0') * 10]);
	if (nbr[1] != '0')
	{
		ft_string_append_str(str, " ");
		if (!g_small_dict[nbr[1] - '0'])
			return (0);
		ft_string_append_str(str, g_small_dict[nbr[1] - '0']);
	}
	return (1);
}

int		ft_calculate_3(t_string *str, char *nbr)
{
	if (nbr[0] == '0' && nbr[1] == '0' && nbr[2] == '0')
		return (1);
	if (nbr[0] != '0')
	{
		if (str->size > 0)
			ft_string_append_str(str, " ");
		if (!g_small_dict[nbr[0] - '0'])
			return (0);
		ft_string_append_str(str, g_small_dict[nbr[0] - '0']);
		ft_string_append_str(str, " ");
		if (!g_small_dict[100])
			return (0);
		ft_string_append_str(str, g_small_dict[100]);
	}
	if (!ft_calculate_2(str, &nbr[1]))
		return (0);
	return (1);
}

int		ft_calculate_batches(t_string *str, char *nbr)
{
	int		i;
	int		batch_number;

	i = 0;
	batch_number = ft_strlen(nbr) / 3;
	while (i < batch_number)
	{
		if (ft_calculate_3(str, &nbr[i * 3]) == 0)
			return (0);
		if (i != batch_number - 1)
			if (nbr[i * 3] != '0' || nbr[i * 3 + 1] != '0' ||
					nbr[i * 3 + 2] != '0')
			{
				ft_string_append_str(str, " ");
				if (11 < batch_number - i - 2 ||
					!g_big_dict[batch_number - i - 2])
					return (0);
				ft_string_append_str(str, g_big_dict[batch_number - i - 2]);
			}
		i++;
	}
	return (1);
}

char	*ft_calculate(char *nbr)
{
	t_string	str;
	char		*complement_nbr;

	str = ft_string_new();
	if (nbr[0] == '0' && nbr[1] == '\0')
	{
		if (!g_small_dict[0])
			return (0);
		ft_string_append_str(&str, g_small_dict[0]);
		return (str.data);
	}
	complement_nbr = ft_complement(nbr);
	if (!ft_calculate_batches(&str, complement_nbr))
		return (0);
	free(complement_nbr);
	return (str.data);
}
