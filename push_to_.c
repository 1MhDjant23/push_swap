/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:25:05 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/10 22:26:07 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	_push(t_push **stack_a, t_push **stack_b)
{
	t_push	*temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	(*stack_b) = temp;
}

void	_push_to_b(t_push **stack_a, t_push **stack_b)
{
	if (*stack_a == NULL)
		return ;
	write(1, "pb\n", 3);
	_push(stack_a, stack_b);
}

void	_push_to_a(t_push **stack_a, t_push **stack_b)
{
	if (*stack_b == NULL)
		return ;
	write(1, "pa\n", 3);
	_push(stack_b, stack_a);
}
