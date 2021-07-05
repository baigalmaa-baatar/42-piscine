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

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);

	if (power == 0)
		return (1);

	if (power == 1)
		return (nb);

	return (ft_recursive_power(nb, power - 1)*(nb));
}
