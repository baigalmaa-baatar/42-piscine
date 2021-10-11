/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:56:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/05 12:56:12 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *create_elem(int    data)
{
    t_list  *elem;

    if (!(elem = malloc(sizeof(t_list))))
        return (0);
    elem->data = data;
    elem->next = NULL;

    return (elem);
}

void ft_list_push_back(t_list **begin_list, int data)
{
    t_list  *list;

    list = *begin_list;
    if (!list)
        list = create_elem(data);
    else
    {
        while(list->next)
        {
            list = list->next;
        }
        list->next = create_elem(data);
    }
}

int main(void)
{
    t_list  *a = NULL;
    int nbrs[4] = {12, 34, 56, 78};
    int i = 1;

    a = create_elem(nbrs[0]);
    while (i < 4)
    {
        a->next = create_elem(nbrs[i]);
        a = a->next;
        i++;
    }
    ft_list_push_back(&a, 90);
    printf("%d\n", a->next->data);
}