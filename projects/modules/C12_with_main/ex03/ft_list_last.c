/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:02:33 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/05 11:02:35 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *create_elem(int    nbr)
{
    t_list  *elem;
    if (!(elem = malloc (sizeof(t_list))))
        return (0);
    elem->data = nbr;
    elem->next = NULL;

    return (elem);
}

t_list *ft_list_last(t_list *begin_list)
{
    t_list  *list;
    
    list = begin_list;
    while(list->next)
    {
        list = list->next;
    }
    return (list);
}

int main(void)
{
    t_list  *a = NULL;
    int nbrs[4] = {12, 34, 56, 74};
    int i = 1;

    a = create_elem(nbrs[0]);
    while (i < 4)
    {   
        a->next = create_elem(nbrs[i]);
        a = a->next;
        i++;
    }

    printf("%d\n", ft_list_last(a)->data);
    return (0);
}
