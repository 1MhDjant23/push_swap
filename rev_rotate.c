/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:21:06 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/10 22:24:14 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_push **head)
{
	t_push	*last;
	t_push	*prev_last;

	last = *head;
	prev_last = *head;
	while (last->next != NULL)
		last = last->next;
	while (prev_last->next != NULL && prev_last->next->next != NULL)
		prev_last = prev_last->next;
	last->next = (*head);
	(*head) = last;
	prev_last->next = NULL;
}

void	_rra(t_push **lst)
{
	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	rev_rotate(lst);
	write(1, "rra\n", 4);
}

void	_rrb(t_push **lst)
{
	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	rev_rotate(lst);
	write(1, "rrb\n", 4);
}
