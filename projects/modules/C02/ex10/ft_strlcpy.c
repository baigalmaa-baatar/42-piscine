/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:49:15 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/09 13:55:13 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int dest_size)
{
	unsigned int i;

	i = 0;
	if (dest_size == 0)
		return (str_length(src));
	while (src[i] && i < (dest_size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < dest_size)
	{
		dest[i] = '\0';
	}
	return (str_length(src));
}
