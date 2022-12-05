/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:58:21 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/05 11:12:48 by pmarquez         ###   ########.fr       */
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
}

// sb
void    ft_swap_b(t_stack *b)
{
    int temp;
    temp = b->array[b->max];
    b->array[b->max] = b->array[b->max - 1];
    b->array[b->max - 1] = temp;
}

// ss (sa y sb)
void    ft_swap_a_b(t_stack *a, t_stack *b)
{
    ft_swap_a(a);
    ft_swap_b(b);
}