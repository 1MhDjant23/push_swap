/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:18:01 by mait-taj          #+#    #+#             */
/*   Updated: 2024/04/22 10:54:25 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_push *head)
{
    int temp;

    temp = head->data;
    head->data = head->next->data;
    head->next->data = temp;
}

void    _sa(t_push *lst)
{
    if (lst == NULL || lst->next == NULL)
        return ;
    swap(lst);
    write(1, "sa\n", 3);
}

void    _sb(t_push *lst)
{
    if (lst == NULL || lst->next == NULL)
        return ;
    swap(lst);
    write(1, "sb\n", 3);
}
