/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:56:15 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/11 13:56:43 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	int i;

	i = 0;
	while(argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return(0);
}
