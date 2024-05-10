/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:18:26 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/10 16:30:08 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push	*ft_lstnew(long content)
{
	t_push	*new_element;

	new_element = malloc(sizeof(t_push));
	if (!new_element)
		return (NULL);
	new_element->data = content;
	new_element->next = NULL;
	return (new_element);
}

int arg_checker(t_push  *list)
{
    t_push  *temp;
    t_push  *current;
    
    if (!list)
        return (-1);
    current = list;
    while (current)
    {  
        temp = current->next;
        while (temp)
        {
            if (current->data == temp->data)
                return (-1);
            temp = temp->next;
        }
        current = current->next;
    }
    return (0);
}
int if_isn_t_digit(char *arg)
{
    int i;

    i = 0;
    while (arg[i])
    {
        if (arg[i] == '-' || arg[i] == '+')
            i++;
        if (ft_isdigit(arg[i]) == 0)
            return (-1);
        i++;
    }
    return (0);
}

int list_size(t_push *lst)
{
    int count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return count;
}

int is_sorted(t_push *head)
{
    t_push  *temp;

    temp = head;
    while (temp && temp->next)
    {
        if (temp->data > temp->next->data)
            return (-1);
        temp = temp->next;
    }
    return (0);
}
