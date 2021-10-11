/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:17:23 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/05 16:17:25 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *create_elem(int    data)
{
    t_list *elem;

    if (!(elem = malloc(sizeof(t_list))))
        return (0);

    elem->data = data;
    elem->next = NULL;

    return (elem);
}

void ft_list_reverse(t_list **begin_list)
{
    t_list  *curr= NULL, *prev = NULL, *suiv = NULL;

    curr = *begin_list;
    while (curr)
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

    ft_list_reverse(&b);
    i = 0;
    while (i < 4)
    {
        printf("%d\n", b->data);
        b = b->next;
        i++;
    }
    return (0);
}