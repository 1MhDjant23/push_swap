#include "push_swap.h"

void    list_indexing(t_push **head, int *array, int ac)
{
    t_push  *temp;
    int     i;

    i = 0;
    while (i < ac)
    {
        temp = *head;
        while (temp)
        {
            if (array[i] == temp->data)
            {
                temp->index = i;
                break;
            }
            temp = temp->next;
        }
        i++;
    }
}

void    index_ing(t_push **a, int ac)
{
    t_push  *tmp;
    int     i;
    int *arr;

    i = 0;
    tmp = *a;
    arr = malloc(sizeof(int ) * ac);
    if (arr == NULL)
        return ;
    while (i < ac && tmp)
    {
        arr[i++] = tmp->data;
        tmp = tmp->next;
    }
    sort_arr(arr, ac);
    list_indexing(a, arr, ac);
    free(arr);
    arr = NULL;
}
void    push_range_tob(t_push **a, t_push **b, int range)
{
    int start;

    if (!(*a))
        return ;
    start = 0;
    while (*a)
    {
        if (((*a)->index >= start && (*a)->index <= range) || ((*a)->index < start))
        {
            if ((*a)->index < start)
            {
                _push_to_b(a, b);
                _rb(b);
            }
            else
                _push_to_b(a, b);
            start++;
            range++;
        }
        else if ((*a)->index > range)
            _ra(a);
    }
}

void    check_biggest(t_push **sta_b, t_push **sta_a)
{
    t_push  *tmp;
    t_push  *biggest;

    indexing_b(sta_b);
    tmp = *sta_b;
    biggest = *sta_b;
    while (tmp)
    {
        if (biggest->data < tmp->data)
            biggest = tmp;
        tmp = tmp->next;
    }
    if ((biggest == (*sta_b)) || (biggest == tmp))
    {
        if (biggest == tmp)
            _rrb(sta_b);
        _push_to_a(sta_a, sta_b);
    }
    else if ((biggest->index) < (list_size(*sta_b) / 2))
        _rb(sta_b);
    else if ((biggest->index) >= (list_size(*sta_b) / 2))
        _rrb(sta_b);
}
void    indexing_b(t_push **b)
{
    t_push  *temp;
    int     i;

    i = 0;
    temp = *b;
    while (temp)
    {
        temp->index = i++;
        temp = temp->next;
    }
}
