#include "push_swap.h"

void three_arguments(t_list *list)
{
    t_list *current;

    current = NULL;
    if (!list)
        return;
    current = list->next;
    if (*list->content > *current->content)
    {
        swap(list, "sa\n");
        three_arguments(list);
    }
    if (*current->content > *current->next->content)
    {
        reverse(&list, "rra\n");
        three_arguments(list);
    }
    print_list(list);
}