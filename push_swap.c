/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:33:12 by mait-taj          #+#    #+#             */
/*   Updated: 2024/05/10 17:42:37 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    arg_to_list(char *av, t_push **a)
{
    char    **argument;
    int     i;
    i = 0;
    argument = ft_split(av, ' ');
    if (!argument)
        return ;
    while (argument[i])
    {
        if (ft_atoi(argument[i]) > INT_MAX)
        {
            free_arg(argument);
            exit(write(2, "Error\n", 6));
        }
        ft_lstadd_back(a, ft_lstnew(ft_atoi(argument[i])));
        i++;
    }
    free_arg(argument);
}

void ft_leaks(void)
{
    system("leaks push_swap");
}
void    sort_the_list(t_push **a, t_push **b)
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

int main(int argc, char **argv)
{
    t_push   *a;
    t_push   *b;

    a = NULL;
    b = NULL;
    // atexit(ft_leaks);
    if (argc >= 2)
    {
        int i;

        i = 1;
        while (i < argc)
            arg_to_list(argv[i++], &a);
        if (arg_checker(a) == -1)
            return (free_list(&a), write(2, "Error\n", 6));
        if (list_size(a) == 1)
            return (free_list(&a), 0);
        if (is_sorted(a) != -1)
            return (free_list(&a), 0);
        else
            sort_the_list(&a, &b);
        free_list(&a);
    }
    return (0);
}
        // free_list(&a);
        // t_push  *tmp = a;
        // while (tmp)
        // {
        //     printf("%d\n", tmp->data);
        //     tmp = tmp->next;
        // }
   
    // if (argc == 2)
    // {
    //     argument = ft_split(argv[1], ' ');
    //     a = link_noed(argument, argc);
    //     if (arg_checker(a) == -1)
    //         return (ft_printf("ERROR\n"));
    //     if (arg_count(argument) == 2)
    //         alg_for_two(a);
    //     else if (arg_count(argument) == 3)
    //         alg_for_three(&a);
    //     else if (arg_count(argument) == 4 || arg_count(argument) == 5)
    //         alg_for_five(&a, &b, arg_count(argument));
    //     else if (arg_count(argument) <= 100)
    //         algo_for_hundered(&a, &b, 13);
    // }
    // else if (argc >= 3)
    // {
    //     a = link_noed(argv, argc);
    //     if (arg_checker(a) == -1)
    //         return (ft_printf("ERROR\n"));
    //     if (argc == 3)
    //         alg_for_two(a);
    //     else if (argc == 4)
    //         alg_for_three(&a);
    //     else if (argc == 5 || argc == 6)
    //         alg_for_five(&a, &b, argc - 1);
    //     else if (argc <= 101)
    //         algo_for_hundered(&a, &b, 13);
    //     else if (argc <= 501)
    //         algo_for_hundered(&a, &b, 37);
    // }
    // return 0;
// }

// ++43
// while (str[i])
// {
//     str[i] == '- '
//         i++;
//     while (str[i] >= '0' && str[i] <= '9')
//     {
//         i++;
//     }
    
// }
