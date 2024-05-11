/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:27:25 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/11 10:32:35 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>

typedef struct s_push
{
	int				data;
	int				index;
	struct s_push	*next;
}					t_push;

void	swap(t_push *head);
void	_sa(t_push *lst);
void	_sb(t_push *lst);
void	ro_tate(t_push **head);
void	_ra(t_push **list);
void	_rb(t_push **list);
void	rev_rotate(t_push **head);
void	_rra(t_push **lst);
void	_rrb(t_push **lst);
void	alg_for_two(t_push *lst);
void	alg_for_three(t_push **lst);
int		arg_checker(t_push *list);
void	_push_to_b(t_push **stack_a, t_push **stack_b);
void	_push_to_a(t_push **stack_a, t_push **stack_b);
void	_push(t_push **stack_a, t_push **stack_b);
void	alg_for_five(t_push **stack_a, t_push **stack_b, int ac);
void	push_smallest(t_push **head, t_push **_to_, t_push **smallest);
void	two_small_tob(t_push **stack_a, t_push **stack_b);
void	index_ing(t_push **a, int ac);
void	sort_arr(int *array, int ac);
void	algo_for_hundered(t_push **stack_a, t_push **stack_b, int range);
void	push_range_tob(t_push **a, t_push **b, int range);
void	check_biggest(t_push **sta_b, t_push **sta_a);
void	indexing_b(t_push **b);
int		list_size(t_push *lst);
int		if_isn_t_digit(char *arg);
int		is_sorted(t_push *head);
t_push	*ft_lstnew(int content);
void	free_arg(char **str);
void	free_list(t_push **lst);
void	ft_lstadd_back(t_push **lst, t_push *new);
#endif