/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:35:25 by bbaatar           #+#    #+#             */
/*   Updated: 2021/09/30 16:35:26 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list *stack_a;

    if (!(stack_a = malloc(sizeof(t_list))))
        return (0);
    stack_a->data = data;
    stack_a->next = NULL;

    return (stack_a);
}

int ft_list_size(t_list *begin_list)
{
    int len;
    t_list *tmp;

    len = 0;
    tmp = begin_list;
    while (tmp)
    {
        len++;
    }
    return (len);
}

int main(void)
{
    t_list *stack_a = NULL;
    t_list *tmp;

    char    *data[3] = {"12", "45", "67"};
    int i = 0;
    tmp = stack_a;
    while (i < 3)
    {
        stack_a = ft_create_elem((void *)data[i]);
        printf("%s\n", (char *)stack_a->data);
        i++;
    }
    printf("%d\n", ft_list_size(tmp));

    return (0);
}
