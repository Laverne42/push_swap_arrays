/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:33:52 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/05 11:00:50 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Pone el primer elemento de 'a' en el top
// del stack 'b'. No hace nada si 'a' está vacío.
void    ft_push_b(t_stack *a, t_stack *b)
{
    int x;

    x = 0;    
printf("\nStack a: %d %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);
printf("Top stack a: %d\n", a->array[a->max]);
printf("Top stack b: %d\n", b->array[b->max]);
    if(a->array[x] == 0)
        return;
    else if (!b->array[b->max])
    {
        b->array[b->max] = a->array[a->max];
        a->array[a->max] = '\0';
    a->max--;
    }
    else if (a->max >= 0)
    {
        b->array[b->max + 1] = a->array[a->max];
        a->array[a->max] = '\0';
        a->max--;
        b->max++;
    }

printf("Top stack b: %d\n", b->array[b->max]);
printf("Stack a: %d %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);
printf("Stack b: %d %d %d %d %d\n", b->array[0], b->array[1], b->array[2], b->array[3], b->array[4]);
printf("Top stack a: %d\n", a->array[a->max]);
}