/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:05:43 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/08 16:05:44 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*create_elem(int data)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (0);
	elem->data = data;
	elem->next = NULL;

	return (elem);
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list;

	list = *begin_list;
	cmp(list->data, )

}

int	cmp(int data, int ref_data)
{

}

int main(void)
{
	t_list *a, *b;
	int nbrs[4] = {40, 20, 10, 30};
	int i = 1;

	a = create_elem(nbrs[0]);
	b = a;
	while (i < 4)
	{
		a->next = create_elem(nbrs[i]);
		a = a->next;
		i++;
	}
	ft_list_sort(&b, cmp);

	return (0);
}
