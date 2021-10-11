/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:35:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/05/09 18:35:20 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return(0);
    tmp->data = data;
    tmp->next = NULL;
	
	return(tmp);
}

void	ft_list_push_front(t_list **stack_a, void *data)
{
	t_list *tmp;

	tmp = ft_create_elem(data);
	tmp->next = *stack_a;
	*stack_a = tmp;
}

int		main(void)
{
	char	*last = "45";
	t_list	*stack_a = NULL;

	ft_list_push_front(&stack_a, (void *)last);
    printf("%s\n", stack_a->data);

	return(0);
}
