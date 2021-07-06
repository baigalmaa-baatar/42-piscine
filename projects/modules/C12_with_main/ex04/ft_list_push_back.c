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

t_list *ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_list;

	new_list = *begin_list;
	if (!new_list)
	{
		while (new_list->next)
			new_list = new_list->next;
		new_list->next = ft_create_elem(data);
	}
	else
		*begin_list =  ft_create_elem(data);
}
