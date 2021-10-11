/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:02:56 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/05 16:02:57 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *create_elem(int    data)
{
    t_list *elem;
    
    if(!(elem = malloc (sizeof(t_list))))
        return (0);
    elem->data = data;
    elem->next = NULL;

    return (elem);
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *list;
    unsigned int cntr = 1;

    if (!list)
        return (0);
    list = begin_list;
    while(list && cntr < nbr)
    {
        printf("%d\n", list->data);
        list = list->next;
        cntr++;
    }

    return (list);
}

int main(void)
{
    t_list *a, *b;
    int nbrs[4] = {12,34,56,78};
    int i = 1;

    a = create_elem(nbrs[0]);
    b = a;
    while (i < 4)
    {
        a->next = create_elem(nbrs[i]);
        a = a->next;
        i++;
    }
    printf("%d\n", ft_list_at(b, 2)->data);

    return (0);
}