#include "push_swap.h"

void    ro_tate(t_push **head)
{
    t_push  *first_node;
    t_push  *tail;

    first_node = *head;
    tail = *head;
    *head = first_node->next;
    while (tail->next != NULL)
        tail = tail->next;
    first_node->next = NULL;
    tail->next = first_node;
}
void    _ra(t_push **list)
{
    if ((*list) == NULL || (*list)->next == NULL)
        return ;
    ro_tate(list);
    ft_printf("ra\n");
}
void    _rb(t_push **lst)
{
    if ((*lst) == NULL || (*lst)->next == NULL)
        return ;
    ro_tate(lst);
    ft_printf("rb\n");
}
