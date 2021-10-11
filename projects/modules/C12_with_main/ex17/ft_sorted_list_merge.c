/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:59:18 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/09 10:59:20 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
int SIZE = 4;

t_list	*create_elem(int data)
{
	t_list *elem;
	if (!(elem = malloc (sizeof(t_list))))
		return (0);
	elem->data = data;
	elem->next = NULL;

	return (elem);
}

int cmp(int data, int ref_data)
{
	if (data >= ref_data)
		return (0);
	return (1);
}

void ft_print(t_list *ref_list)
{
	t_list *list;

	list = ref_list;
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*list1, *list2, *tmp1, *tmp2;

	list1 = *begin_list1;
	list2 = begin_list2;

	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
	}
	else
	{
		if (list1->data >= list2->data)
		{
			tmp1 = create_elem(list2->data);
			tmp1->next = list1;
			list1 = tmp1;
			list2 = list2->next;
			*begin_list1 = list1;
		}
		while(list1->next)
		{
			if(!cmp(list1->next->data, list2->data))
			{
				tmp1 = list1->next;
				tmp2 = create_elem(list2->data);
				list1->next = tmp2;
				tmp2->next = tmp1;
				list1 = tmp2;
				if(list2->next)
				{
					list2 = list2->next;
				}
				else
				{
					list1 = list1->next;
					break;
				}
			}
			else
			{
				list1 = list1->next;
			}
		}
		if (list2->next)
		{
			list1->next = list2;
		}
	}
}

int main (void)
{
	t_list *a, *b, *c, *d;
	int i = 1, size = 4;;
	int nbrs_a[] = {1, 2, 17, 101};
	int nbrs_b[] = {0, 12, 35, 100};

	a = create_elem(nbrs_a[0]);
	c = a;
	b = create_elem(nbrs_b[0]);
	d = b;
	while (i < size)
	{
		a->next = create_elem(nbrs_a[i]);
		a = a->next;
		b->next = create_elem(nbrs_b[i]);
		b = b->next;
		i++;
	}
	ft_sorted_list_merge(&c, d, cmp);
	ft_print(c);
}
