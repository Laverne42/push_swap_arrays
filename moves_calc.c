/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:15:07 by pmarquez          #+#    #+#             */
/*   Updated: 2023/01/10 09:57:43 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Función que devuelve el número más alto en el stack a.
int ft_higher_number_a(t_stack *a)
{
    int x;
    int y;
    int higher_number;
    
    x = a->max - 1;
    higher_number = a->array[x];
    while (x > 0)
    {
    y = x - 1;
        if (a->array[y] > a->array[x])
            higher_number = a->array[y];
    x--;
    }
//printf("Higher number a: %d\n", higher_number);
return(higher_number);
}

// El coste en movimientos de poner cada número del stack b en el top.
// A partir de la mitad del stack, el coste se expresa en números negativos
// porque el movimiento será rrb (menos costoso moverlos hacia abajo que hacia arriba).
// Como nuestro b->max está inicializado en -1 (para contemplar los casos en los que
// no hay ningún número en el stack b), el malloc es + 1.
int *ft_moves_b(t_stack *b)
{
    int x;
    int y;
    int *moves_b;

    x = b->max;
    y = 0;
    moves_b = malloc(sizeof(int) * b->max + 1);
    if (moves_b == NULL)
        return(0);
    while (x >= 0)
    {
        if (x >= b->max / 2)
            moves_b[y] = y;

        else if (x < b->max / 2)
            moves_b[y] = -(x + 1);
    y++;    
    x--;
    }
x = 0;
while (x <= b->max)
{
//printf("Array moves b: %d\n", moves_b[x]);
x++;
}
return(moves_b);
}

// Devuelve la posición en el stack a del número
// inmediatamente superior al número top del stack b.
int ft_position_next_a(t_stack *a, t_stack *b)
{
    int x;
    int y;
    int z;
    int position;

    x = 0;
    y = a->max;
    z = b->max;
    position = 0;
    while (x <= y)
    {
        if (a->array[y] < b->array[z])
            y--;
        else
    {
            position = y;
printf("Position_next: %d\n", position);
            return(position);
    }
    x++;
    }
    printf("Second Position_next: %d\n", position);
return(position);
}

// Función para calcular el coste de movimientos del stack a
// para poner en el top el inmediatamente superior a cada número
// del stack b.
int *ft_moves_a(t_stack *a, t_stack *b)
{
    int x;
    int y;
    int z;
    int *moves_a;
    
    x = a->max;
    y = 0;
    z = ft_higher_number_a(a);
    moves_a = malloc(sizeof(int) * b->max + 1);
    if (moves_a == NULL)
        return(0);
    while(x >= 0)
    {
        if (ft_position_next_a(a, b) >= a->max / 2)
        {
            moves_a[y] = y;
        }
        else if (ft_position_next_a(a, b) < a->max / 2)
        {
            moves_a[y] = -(ft_position_next_a(a,b) + 1);
        }
    y++;        
    x--;
    }
x = 0;
while (x <= b->max)
    {
        printf("Moves_a: %d\n", moves_a[x]);
        x++;
    }
return(moves_a);
}

