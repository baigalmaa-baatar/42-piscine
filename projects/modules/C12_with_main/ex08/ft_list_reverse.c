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

void ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *curr;
	t_list *suiv;

	curr = *begin_list;
	prev = NULL;
	suiv = NULL;

	while (curr != NULL)
	{
		suiv = curr->next;
		curr->next = prev;
		prev = curr;
		curr = suiv;
	}
	*begin_list = prev;
}

int main(void)
{
	char *data1 = "One";
	char *data2 = "two";
	char *data3 = "three";

	t_list *head = NULL;

	head = ft_create_elem((void *)data1);
	head->next = ft_create_elem((void *)data2);
	head->next->next = ft_create_elem((void *)data3);
	head->next->next->next = NULL;

	ft_list_reverse(&head);

	while (head)
	{
		printf("result : %s\n", head->data);
		head = head->next;
	}

	return (0);
}