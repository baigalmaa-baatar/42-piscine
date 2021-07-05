/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:42:23 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/09 11:28:09 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	return (i + k);
}
// 
// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	res;
//
// 	i = 0;
// 	while (dest[i] != '\0')
// 		++i;
// 	res = 0;
// 	while (src[res] != '\0')
// 		++res;
// 	if (size <= i)
// 		res += size;
// 	else
// 		res += i;
// 	j = 0;
// 	while (src[j] != '\0' && i + 1 < size)
// 	{
// 		dest[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dest[i] = '\0';
// 	return (res);
// }
