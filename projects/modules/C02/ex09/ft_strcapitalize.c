/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:38:48 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/10 13:36:44 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str = lowercase(str);
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
		{
			while (!((str[i] >= 'a' && str[i] <= 'z') ||
						(str[i] >= '0' && str[i] <= '9')) && str[i])
				i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}
