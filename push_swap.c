/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:33:12 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/11 11:08:30 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_to_list(char *av, t_push **a)
{
	char	**argument;
	int		i;

	i = 0;
	argument = ft_split(av, ' ');
	if (!argument)
		return ;
	while (argument[i])
	{
		if (ft_atoi(argument[i]) > INT_MAX)
		{
			free_arg(argument);
			free_list(a);
			exit(write(2, "Error\n", 6));
		}
		ft_lstadd_back(a, ft_lstnew(ft_atoi(argument[i])));
		i++;
	}
	free_arg(argument);
}

void	sort_the_list(t_push **a, t_push **b)
{
	if (list_size(*a) == 2)
		alg_for_two(*a);
	else if (list_size(*a) == 3)
		alg_for_three(a);
	else if (list_size(*a) <= 5)
		alg_for_five(a, b, list_size(*a));
	else if (list_size(*a) <= 100)
		algo_for_hundered(a, b, 13);
	else if (list_size(*a) <= 500)
		algo_for_hundered(a, b, 37);
}

int	main(int argc, char **argv)
{
	t_push	*a;
	t_push	*b;
	int		i;

	a = NULL;
	b = NULL;
	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
			arg_to_list(argv[i++], &a);
		if (arg_checker(a) == -1)
			return (free_list(&a), write(2, "Error\n", 6));
		if (list_size(a) == 1)
			return (free_list(&a), 0);
		if (is_sorted(a) == -1)
			return (free_list(&a), 0);
		else
			sort_the_list(&a, &b);
		free_list(&a);
	}
	else
		return (0);
}
