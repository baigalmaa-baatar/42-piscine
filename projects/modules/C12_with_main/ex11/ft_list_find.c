/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:35:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/05/09 18:35:20 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data);

int ft_strcmp(void *data, void *data_ref)
{
	char *s1 = (char *)data;
	char *s2 = (char *)data_ref;
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*ft_strcmp)())
{
	t_list *current;

	current = begin_list;
	while (current)
	{
		if (ft_strcmp(current->data, data_ref) == 0)
			return(current);
		current = current->next;
	}
	return(0);
}

int main(void)
{
	char *data1 = "One";
	char *data2 = "two";
	char *data3 = "three";

	t_list *result = NULL;

	t_list *head = NULL;

	head = ft_create_elem((void *)data1);
	head->next = ft_create_elem((void *)data2);
	head->next->next = ft_create_elem((void *)data3);
	head->next->next->next = NULL;

	result = ft_list_find(head, "two", (*ft_strcmp));
	printf("the result is : %s\n", (char *)result->data);

	return (0);
}