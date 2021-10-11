/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:50:46 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/05 13:50:47 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *create_elem(int    data)
{
    t_list  *elem;

    if(!(elem = malloc(sizeof(t_list))))
        return (0);
    elem->data = data;
    elem->next = NULL;

    return (elem);
}

void ft_list_clear(t_list *begin_list)
{   
    t_list  *current;
    t_list  *tmp;

    current = begin_list;
    while (current)
    {
        current->data = 0;
        tmp = current;
        current = current->next;
        free(tmp);
    }
}   

int main(void)
{
    t_list  *a;
    t_list  *b;
    int nbrs[4] = {12,34,56,78};
    int i = 1;

    a = create_elem(nbrs[0]);
    b = a;
    printf("before freeing %d\n", b->data);
    while (i < 4)
    {
        b->next = create_elem(nbrs[i]);
        a = b->next;
        printf("before freeing %d\n", b->data);
        i++;
    }
    ft_list_clear(b);
    while (a)
    {
        a = a->next;
        printf("after freeing %d\n", a->data);
    }
}