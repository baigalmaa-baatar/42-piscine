/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:00:29 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/07 11:00:32 by bbaatar          ###   ########.fr       */
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

int ft_doubler(int nbr)
{
    return (nbr * 2);
}

void    ft_list_foreach(t_list *begin_list, int (*f)(int nbr))
{  
    t_list  *list;

    list = begin_list;
    while (list)
    {   
        list->data = f(list->data);
        printf("%d\n", list->data);
        list = list->next;
    }
}

int main(void)
{
    t_list *a = NULL, *b = NULL;
    int nbrs[3] = {12, 34, 56};
    int i = 1;

    a = create_elem(nbrs[0]);
    b = a;
    while (i < 3)
    {
        a->next = create_elem(nbrs[i]);
        a = a->next;
        i++;
    }
    ft_list_reverse(&b);
    ft_list_foreach(b, ft_doubler);

    return (0);
}