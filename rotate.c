/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:17:52 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/06 10:02:44 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ra
// Almacenamos en una variable temp el valor de a->max.
// En otra, el valor de la primera posición del array.
// Vamos subiendo un número a su posición siguiente
// en el array (ordenado al revés que el stack).
// Al final, en la posición 1 del array escribimos
// el número de la primera posición guardado previamente.
void    ft_rotate_a(t_stack *a)
{
int temp;
int temp2;
int x;
int y;

y = a->max;
x = 0;
temp2 = a->array[x];
while (y > x)
    {
        temp = a->array[y];
        a->array[y] = a->array[y - 1];
        a->array[y - 1] = temp;
 
    y--;
    }
a->array[1] = temp2;
write (1, "ra\n", 3);
}

// rb
// Ídem con el stack b
void    ft_rotate_b(t_stack *b)
{
int temp;
int temp2;
int x;
int y;

y = b->max;
x = 0;
temp2 = b->array[x];
while (y > x)
    {
        temp = b->array[y];
        b->array[y] = b->array[y - 1];
        b->array[y - 1] = temp;
 
    y--;
    }
b->array[1] = temp2;
write (1, "rb\n", 3);
}

// rr (ra y rb)
// Ídem a la vez en los dos stacks
void    ft_rotate_a_b(t_stack *a, t_stack *b)
{
    ft_rotate_a(a);
    ft_rotate_b(b);
    write (1, "rr\n", 3);
}