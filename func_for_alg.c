#include "push_swap.h"

void    two_small_tob(t_push **stack_a, t_push **stack_b)
{
    t_push  *temp;
    t_push  *smallest;

    temp = *stack_a;
    smallest = *stack_a;
    while (temp)
    {
        if (smallest->data > temp->data)
                smallest = temp;
        temp = temp->next;
    }
    if (smallest == *stack_a)
            _push_to_b(stack_a, stack_b);
    else if (smallest == (*stack_a)->next)
    {
        _sa(*stack_a);
        _push_to_b(stack_a, stack_b);
    }
    else
        push_smallest(stack_a, stack_b, &smallest);     
}

void    sort_arr(int *array, int ac)
{
    int n;
    int x;
    int sw;
    
    if (array == NULL)
        return ;
    
    n = 0;
    while (n < ac)
    {
        x = n + 1;
        while (x < ac)
        {
            if (array[n] > array[x])
            {
                sw = array[n];
                array[n] = array[x];
                array[x] = sw;
            }
            x++;
        }
        n++;
    } 
}
void    push_smallest(t_push **head, t_push **_to_, t_push **smallest)
{
    t_push  *pre_last;

    pre_last = *head;
    while (pre_last->next->next)
        pre_last = pre_last->next;
    if (*smallest == (*head)->next->next)
    {
        _ra(head);
        _sa(*head);
        _push_to_b(head, _to_);
    }
    else if (*smallest == pre_last)
    {
        _rra(head);
        _rra(head);
        _push_to_b(head, _to_);
    }
    else if (*smallest == pre_last->next)
    {
        _rra(head);
        _push_to_b(head, _to_);
    }
}
int arg_count(char **s)
{
    int i;

    i = 0;
    if (!*s)
        return (0);
    while (s[i])
        i++;
    return (i);
}
void	ft_lstadd_back(t_push **lst, t_push *new)
{
	t_push	*temp;

	if (!lst || !new)
		return ;
	temp = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (temp && temp->next)
		temp = temp->next;
	temp->next = new;
}

