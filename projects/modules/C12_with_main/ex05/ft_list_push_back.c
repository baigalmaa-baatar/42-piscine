/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:35:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/05/09 18:35:20 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"
#include <stdio.h>
t_list *ft_create_elem(void *data);

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *elem;
	int i;

	elem = ft_create_elem(strs[0]);
	i = 1;
	while (i < size)
	{
		elem->next = ft_create_elem((void *)strs[i]);
		elem = elem->next;
		i++;
	}
	return (elem);
}
 
#include <stdio.h>

int	main(void)
{
	t_list *list;
	char	*strs[4] = {"abc","def","klm","test"};
	int size = 4;

	list = ft_list_push_strs(size, strs);
	printf("%s\n", list->data);

	return(0);
}