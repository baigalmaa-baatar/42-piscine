/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:23:25 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/10 13:52:55 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j])
			{
				if (str[i + j] != to_find[j])
					break ;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
