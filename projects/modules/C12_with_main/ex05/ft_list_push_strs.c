/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:16:48 by bbaatar           #+#    #+#             */
/*   Updated: 2021/10/05 13:16:50 by bbaatar          ###   ########.fr       */
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

t_list *ft_list_push_nbrs(int size, int *nbrs)
{
    t_list *root = NULL, *next_list = NULL;

    if(size <= 0)
        return (0);
    size--;
    root = create_elem(nbrs[size]);
    next_list = root;
    while (size-- >= 0)
    {
        next_list->next = create_elem(nbrs[size]);
        next_list = next_list->next;
    }
    return (root);
}

int main(void)
{
    int nbrs[4] = {12,34,56,78};

    printf("%d\n", ft_list_push_nbrs(4, nbrs)->data);
    printf("%d\n", ft_list_push_nbrs(4, nbrs)->next->data);
    printf("%d\n", ft_list_push_nbrs(4, nbrs)->next->next->data);
    printf("%d\n", ft_list_push_nbrs(4, nbrs)->next->next->next->data);
}
