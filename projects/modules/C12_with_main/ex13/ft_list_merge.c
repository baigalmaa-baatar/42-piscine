/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:09:59 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/08 14:10:00 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *create_elem(int data)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (0);
	elem->data = data;
	elem->next = NULL;

	return (elem);
}
void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list1;
	t_list *list2;

	list1 = *begin_list1;
	list2 = begin_list2;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
	}
	else
	{
		while (list1->next)
		{
			list1 = list1->next;
		}
		list1->next = list2;
	}
}

int main(void)
{
	t_list *a, *b, *c, *d;
	int nbrs_a[4] = {1, 2, 3, 4};
	int nbrs_b[4] = {5, 6, 7, 8};
	int i = 1;

	a = create_elem(nbrs_a[0]);
	b = create_elem(nbrs_b[0]);
	c = a;
	d = b;
	while (i < 4)
	{
		a->next = create_elem(nbrs_a[i]);
		a = a->next;
		b->next = create_elem(nbrs_b[i]);
		b = b->next;
		i++;
	}
	ft_list_merge(&c, d);
	while(c)
	{
		printf("%d\n", c->data);
		c = c->next;
	}
	return (0);	
}