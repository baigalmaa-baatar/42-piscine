/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:42:35 by bbaatar           #+#    #+#             */
/*   Updated: 2021/08/11 14:42:42 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str1[] = "LOLOLaaa";
	char	str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf ("%s\n", ft_strcapitalize(str1));
	printf ("%s\n", ft_strcapitalize(str2));
	return (0);
}
