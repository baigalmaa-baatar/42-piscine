/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:35:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/05/09 18:03:19 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *element;

	if (!(element = (t_list *)malloc(sizeof(t_list))))
		return(0);
    element->data = data;
    element->next = NULL;
	
	return(element);
}

#include <stdio.h>

int		main(void)
{
	// char	*data = "One two three";
	// t_list	*list;

	// list = ft_create_elem((void *)data);
	// printf("%s\n", list->data);

	char *data = "hello, i'm a data";
	t_list *l = ft_create_elem(data);

	// if (!strcmp(data, l->data))
	printf("%s\n", l->data);

	return(0);
}