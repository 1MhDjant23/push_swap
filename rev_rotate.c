#include "push_swap.h"

void    rev_rotate(t_push **head)
{
    t_push  *last;
    t_push  *prev_last;

    last = *head;
    prev_last = *head;
    while(last->next != NULL)
        last = last->next;
    while (prev_last->next != NULL && prev_last->next->next != NULL)
        prev_last = prev_last->next;
    last->next = (*head);
    (*head) = last;
    prev_last->next = NULL;
}

void    _rra(t_push **lst)
{
    if (*lst == NULL || (*lst)->next == NULL)
        return ;
    rev_rotate(lst);
    ft_printf("rra\n");
}

void    _rrb(t_push **lst)
{
    if (*lst == NULL || (*lst)->next == NULL)
        return ;
    rev_rotate(lst);
    ft_printf("rrb\n");
}