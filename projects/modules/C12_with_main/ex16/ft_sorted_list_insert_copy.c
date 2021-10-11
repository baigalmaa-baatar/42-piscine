/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:14:43 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/08 20:14:44 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*create_elem(int data)
{
	t_list *elem;

	if (!(elem = malloc (sizeof (t_list))))
		return (0);
	elem->data = data;
	elem->next = NULL;

	return (elem);
}
int cmp(int data, int ref_data)
{
	if (data <= ref_data)
	{
		// printf("%d, %d\n", data, ref_data);
		return (0);
	}
	else
		return (1);
}

void ft_sorted_list_insert(t_list **begin_list, int data, int (*cmp)())
{
	t_list *list, *tmp1, *tmp2;

	list = *begin_list;
	if (list->data <= data)
	{
		tmp1 = create_elem(data);
		tmp1->next = list;
		*begin_list = tmp1;
	}
	else
	{
		while (list->next)
		{	
			if (!cmp(list->next->data, data))
			{
				tmp1 = list->next;
				tmp2 = create_elem(data);
				list->next = tmp2;
				tmp2->next = tmp1;
				list = tmp2->next;
				break;
			}
			list = list->next;
		}
		if (!list->next)
			list->next = create_elem(data);
	}
}

int main(void)
{
	t_list *a, *b;
	int nbrs[4] = {78, 56, 34, 12};
	int i = 1, new_data = -1;

	a = create_elem(nbrs[0]);
	b = a;
	while (i < 4)
	{
		// printf("%d\n", a->data);
		a->next = create_elem(nbrs[i]);
		a = a->next;
		i++;
	}
	ft_sorted_list_insert(&b, new_data, cmp);
	printf("%d\n", b->data);
	printf("%d\n", b->next->data);
	printf("%d\n", b->next->next->data);
	printf("%d\n", b->next->next->next->data);
	printf("%d\n", b->next->next->next->next->data);
}
