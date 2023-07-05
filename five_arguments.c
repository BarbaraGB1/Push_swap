#include "push_swap.h"

void five_arguments(t_list *list, t_list *second)
{
    t_list *current;
    t_list *iter;

    current = NULL;
    current = list;
    iter = list->next;
    ft_printf("estoy aqui");
    if (*current->content > *iter->content)
    {
        swap(list, "sa\n");
        print_list(list);
        print_list(second);
        five_arguments(list, second);
    }
    if ((*current->content < *iter->content))
    {
        /*if (*iter->content > *iter->next->content)
        {
            push(&second, &list, "pa\n");
            five_arguments(list, second);
        }*/
        push(&list, &second, "pb\n");
        print_list(list);
        print_list(second);
        five_arguments(list, second);
    }
    print_list(list);
    print_list(second);
}