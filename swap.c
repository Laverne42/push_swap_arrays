/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:58:21 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/06 10:03:54 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// sa
void    ft_swap_a(t_stack *a)
{
    int temp;
    temp = a->array[a->max];
    a->array[a->max] = a->array[a->max - 1];
    a->array[a->max - 1] = temp;
    write (1, "sa\n", 3);
}

// sb
void    ft_swap_b(t_stack *b)
{
    int temp;
    temp = b->array[b->max];
    b->array[b->max] = b->array[b->max - 1];
    b->array[b->max - 1] = temp;
    write (1, "sb\n", 3);
}

// ss (sa y sb)
void    ft_swap_a_b(t_stack *a, t_stack *b)
{
    ft_swap_a(a);
    ft_swap_b(b);
    write (1, "ss\n", 3);
}