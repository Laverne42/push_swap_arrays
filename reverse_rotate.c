/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:14:24 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/05 11:37:25 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// rra
// Almacenamos en una variable temp el valor de la 
// primera posición del array.
// Vamos copiando cada número a su posición anterior
// en el array (ordenado al revés que el stack).
// Al final, en la posición a->max del array escribimos
// el número de la primera posición guardado previamente.
void    ft_reverse_rotate_a(t_stack *a)
{
printf("array inicial: %d%d%d%d%d\n", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);
int x;
int y;
int temp;

y = a->max;
x = 0;
temp = a->array[x];
while (y > x)
    {
        a->array[x] = a->array[x+1];
    x++;
    }
a->array[a->max] = temp;
printf("Debería ser: 23451\n");
printf("array final: %d%d%d%d%d", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);
}

// rrb
void    ft_reverse_rotate_b(t_stack *b)
{
int x;
int y;
int temp;

y = b->max;
x = 0;
temp = b->array[x];
while (y > x)
    {
        b->array[x] = b->array[x+1];
    x++;
    }
b->array[b->max] = temp;
}

void    ft_reverse_rotate_a_b(t_stack *a, t_stack *b)
{
    ft_reverse_rotate_a(a);
    ft_reverse_rotate_b(b);
}
