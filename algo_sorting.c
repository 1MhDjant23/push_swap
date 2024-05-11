/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:02:52 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/11 11:20:31 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	alg_for_two(t_push *lst)
{
	if (lst->data > lst->next->data)
		_sa(lst);
	else
		return ;
}

void	alg_for_three(t_push **lst)
{
	if ((*lst)->data > (*lst)->next->data
		&& (*lst)->data < (*lst)->next->next->data)
		_sa(*lst);
	else if (((*lst)->data < (*lst)->next->data)
		&& ((*lst)->next->data > (*lst)->next->next->data)
		&& ((*lst)->data < (*lst)->next->next->data))
	{
		_sa(*lst);
		_ra(lst);
	}
	else if (((*lst)->data < (*lst)->next->data)
		&& ((*lst)->next->data > (*lst)->next->next->data)
		&& ((*lst)->data > (*lst)->next->next->data))
		_rra(lst);
	else if (((*lst)->next->data < (*lst)->data)
		&& ((*lst)->next->data < (*lst)->next->next->data))
		_ra(lst);
	else if (((*lst)->next->data < (*lst)->data)
		&& ((*lst)->next->data > (*lst)->next->next->data))
	{
		_sa(*lst);
		_rra(lst);
	}
	else
		return ;
}

void	alg_for_five(t_push **stack_a, t_push **stack_b, int ac)
{
	int	n;

	if (*stack_a == NULL)
		return ;
	n = 0;
	if (ac == 5)
	{
		while (n < 2)
		{
			two_small_tob(stack_a, stack_b);
			n++;
		}
		alg_for_three(stack_a);
		_push_to_a(stack_a, stack_b);
		_push_to_a(stack_a, stack_b);
	}
	else
	{
		two_small_tob(stack_a, stack_b);
		alg_for_three(stack_a);
		_push_to_a(stack_a, stack_b);
	}
}

void	algo_for_hundered(t_push **stack_a, t_push **stack_b, int range)
{
	if (*stack_a == NULL)
		return ;
	index_ing(stack_a, list_size(*stack_a));
	push_range_tob(stack_a, stack_b, range);
	while (*stack_b)
	{
		if (!(*stack_b) || !((*stack_b)->next))
		{
			if ((*stack_b)->next == NULL)
				_push_to_a(stack_a, stack_b);
			return ;
		}
		check_biggest(stack_b, stack_a);
	}
}
