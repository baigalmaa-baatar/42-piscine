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

t_list	*ft_create_elem(void *data)
{
	t_list *element;

	if (!(element = (t_list *)malloc(sizeof(t_list))))
		return(0);
    element->data = data;
    element->next = NULL;
	
	return(element);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	elem->next = *begin_list;
	*begin_list = elem;
}

int	ft_list_size(t_list *begin_list)
{
	unsigned int len;
	t_list *element;

	element = begin_list;

	len = 0;
	while(element)
		len++;
	
	return(len);
}

#include <stdio.h>

int main(void)
{
	char *data = "One two three";
	t_list *begin_list = NULL;

	ft_list_push_front(&begin_list, (void *)data);
	printf("%d\n", ft_list_size(begin_list));

	return (0);
}
