/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:33:52 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/13 17:15:21 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pa
// Pone el primer elemento de 'b' en el top
// del stack 'a'. No hace nada si 'b' está vacío.

void    ft_push_a(t_stack *a, t_stack *b)
{
    int x;

    x = 0;
    if(b->array[x] == 0)
        return;
    else if (a->max > 0)
    {
        a->array[a->max] = b->array[b->max];
    b->max--;
    }
    else if (b->max >= 0)
    {
        a->array[a->max + 1] = b->array[b->max];
        b->array[b->max] = '\0';
        b->max--;
        a->max++;
    }
    a->max++;    
write (1, "pa\n", 3);
}

// pb
// Pone el primer elemento de 'a' en el top
// del stack 'b'. No hace nada si 'a' está vacío.
void    ft_push_b(t_stack *a, t_stack *b)
{
    int x;

    x = 0;    
    if (b->max == 0)
    {
        b->array[b->max] = a->array[a->max];
    a->max--;
    }
    else if (b->max > 0)
    {
        b->array[b->max + 1] = a->array[a->max];
        a->max--;
        b->max++;
    }
write (1, "pb\n", 3);
}