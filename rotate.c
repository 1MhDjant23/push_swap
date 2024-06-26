/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:19:05 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/10 22:19:09 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ro_tate(t_push **head)
{
	t_push	*first_node;
	t_push	*tail;

	first_node = *head;
	tail = *head;
	*head = first_node->next;
	while (tail->next != NULL)
		tail = tail->next;
	first_node->next = NULL;
	tail->next = first_node;
}

void	_ra(t_push **list)
{
	if ((*list) == NULL || (*list)->next == NULL)
		return ;
	ro_tate(list);
	write(1, "ra\n", 3);
}

void	_rb(t_push **lst)
{
	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	ro_tate(lst);
	write(1, "rb\n", 3);
}
