/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:47:17 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/07 16:49:10 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int left;
	int right;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		ft_swap(&tab[left], &tab[right]);
		left++;
		right--;
	}
}
