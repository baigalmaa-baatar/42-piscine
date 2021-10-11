/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:27:00 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/08 10:27:01 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*create_elem(int *data)
{
	t_list *elem;

	if (!(elem = malloc (sizeof(t_list))))
		return (0);
	elem->data = data;
	elem->next = NULL;

	return (elem);
}

int cmp(int *data, int median)
{
	if (*data < median)
		return (0);
	else
		return (1);
}

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		if (!(cmp(list->data, *(int *)data_ref)))
			break;
		list = list->next;
	}
	return (list);
}

int main(void)
{
	t_list *a, *b;
	int nbrs[4] = {78, 40, 34, 12};
	int i = 1;
	int median = 34;

	a = create_elem(&nbrs[0]);
	b = a;
	while(i < 4)
	{
		a->next = create_elem(&nbrs[i]);
		a = a->next;
		i++;
	}
	printf("%p\n", ft_list_find(b, &median, cmp)->data);
}