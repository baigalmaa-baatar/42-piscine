#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list  *stack_a;

    if(!(stack_a = malloc(sizeof(t_list))))
        return (0);
    stack_a->data = data;
    stack_a->next = 0;
    return (stack_a);
}

int main(void)
{
    char    *data = "coucou";

    printf("%s\n", (char *)ft_create_elem(data)->data);
    return (0);
}