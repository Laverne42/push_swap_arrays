/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:52:36 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/09 09:35:32 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap_a_rotate_a (t_stack *a)
{
    ft_swap_a(a);
    ft_rotate_a(a);
}

void    ft_swap_a_reverse_rotate_a (t_stack *a)
{
    ft_swap_a(a);
    ft_reverse_rotate_a(a);
}

void    ft_3_numbers (t_stack *a)
{
    int x;

    x = 0;
//    printf("array: %d %d %d\n", a->array[0], a->array[1], a->array[2]);
        if ((a->array[0] < a->array[1]) && (a->array[1] < a->array[2])) // push_swap 3 2 1 (array: 1 2 3)
            ft_swap_a_reverse_rotate_a(a);
        else if (a->array[0] > a->array[1])
        {
            if ((a->array[1] < a->array[2]) && (a->array[0] > a->array[2])) // push_swap 2 1 3 (array: 3 1 2)
                ft_swap_a(a);
            else // push_swap 3 1 2 (array: 2 1 3)
                ft_rotate_a(a);
        }
        else if (a->array[0] < a->array[1])
        {
            if ((a->array [1] > a->array[2]) && (a->array[2] < a->array[0])) // push_swap 1 3 2 (array: 2 3 1)
                ft_swap_a_rotate_a(a);
            else // push_swap 2 3 1 (array: 1 3 2)
                ft_reverse_rotate_a(a); 
        }    
//printf("array ordenado: %d %d %d\n", a->array[0], a->array[1], a->array[2]);
}