/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:18:42 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/15 13:06:37 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
		return (2);
	i = 0;
	while (i <= 2147483647)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i++;
	}
	return (2147483647);
}
