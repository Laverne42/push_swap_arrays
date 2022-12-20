/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mixed_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:24:08 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/19 11:17:16 by pmarquez         ###   ########.fr       */
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

void    ft_double_rotate_a(t_stack *a)
{
    ft_rotate_a(a);
 //   printf("array tras rotate 1: %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3]);
    ft_rotate_a(a);
//    printf("array tras rotate 2: %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3]);
}

void    ft_double_reverse_rotate_a(t_stack *a)
{
    ft_reverse_rotate_a(a);
    ft_reverse_rotate_a(a);
}