/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:33:52 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/15 11:50:05 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pa
// Mueve el primer elemento de 'b' al top
// del stack 'a'. No hace nada si 'b' está vacío.
void    ft_push_a(t_stack *a, t_stack *b)
{
    int x;

    x = 0;
    
    if(b->max < 0)
        return;
    else
    {
        a->array[a->max + 1] = b->array[b->max];
        a->max++;
        b->max--;
            
    }
write (1, "pa\n", 3);
}

// pb
// Mueve el primer elemento de 'a' al top
// del stack 'b'. No hace nada si 'a' está vacío.
void    ft_push_b(t_stack *a, t_stack *b)
{

int x;

    x = 0;
    
    if(a->max < 0)
        return;
    else
    {
        b->array[b->max + 1] = a->array[a->max];
        a->max--;
        b->max++;
            
    }
write (1, "pb\n", 3);
}