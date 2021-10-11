/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:23:55 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/08 19:23:57 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*create_elem(int data)
{
	t_list *elem;

	if (!(elem = malloc (sizeof(t_list))))
		return (0);
	elem->data = data;
	elem->next = NULL;

	return (elem);
}

void ft_list_reverse_fun(t_list *begin_list)
{
	t_list *list;
	int tmp;
	unsigned int size = 0, i, j;

	i = 0;
	list = begin_list;
	while(list)
	{
		list = list->next;
		size++;
	}
	while (i < size - 1)
	{
		list = begin_list;
		j = i;
		while(list && list->next && j < size -1)
		{
			tmp = list->data;
			list->data = list->next->data;
			list->next->data = tmp;
			list = list->next;
			j++;
		}
		i++;
	}
}

int main(void)
{
	t_list *a, *b;
	int nbrs[4] = {12, 34, 56, 78};
	int i = 1;

	a = create_elem(nbrs[0]);
	b = a;
	while (i < 4)
	{
		a->next = create_elem(nbrs[i]);
		a = a->next;
		i++;
	}
	ft_list_reverse_fun(b);
	printf("%d\n", b->data);
	printf("%d\n", b->next->data);
	printf("%d\n", b->next->next->data);
	printf("%d\n", b->next->next->next->data);
}