/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                               :+:      :+:    :+:   */
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *current;

	current = begin_list;
	while(nbr)
	{
		current = current->next;
		nbr--;
	}

	return(current);
}

int main(void)
{
	char *data1 = "One";
	char *data2 = "two";
	char *data3 = "three";

	t_list *head = NULL;
	t_list *current = NULL;

	head = ft_create_elem((void *)data1);
	head->next = ft_create_elem((void *)data2);
	head->next->next = ft_create_elem((void *)data3);
	head->next->next->next = NULL;

	current = head;
	printf("checking 2nd element : %s\n", (ft_list_at(head, 1)->data));

	return (0);
}