/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:52:36 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/19 11:56:23 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_2_numbers(t_stack *a)
{
    if ((a->array[0] < a->array[1]))
        ft_swap_a(a);
}

// Caso 1: push_swap 3 2 1
// Casos 2 y 3: push_swap 2 1 3 o push_swap 3 1 2
// Casos 4 y 5: push_swap 1 3 2 o push_swap 2 3 1 
void    ft_3_numbers (t_stack *a)
{
    int x;

    x = 0;
        if ((a->array[0] > a->array[1] && (a->array[1] > a->array[2])))
            return;
        if ((a->array[0] < a->array[1]) && (a->array[1] < a->array[2]))
            ft_swap_a_reverse_rotate_a(a);
        else if (a->array[0] > a->array[1])
        {
            if ((a->array[1] < a->array[2]) && (a->array[0] > a->array[2]))
                ft_swap_a(a);
            else
                ft_rotate_a(a);
        }
        else if (a->array[0] < a->array[1])
        {
            if ((a->array [1] > a->array[2]) && (a->array[2] < a->array[0]))
                ft_swap_a_rotate_a(a);
            else
                ft_reverse_rotate_a(a); 
        }    
}


// Buscamos el número más bajo del array y lo 
// mandamos al stack b con push b. Luego llamamos a la función
// ft_3_numbers, ordena los que quedan, y push a.
void    ft_4_numbers (t_stack *a, t_stack *b)
{
    int x;
    int y;
    int position;
    int min;
    
    x = 0;
    position = 0;
    min = a->array[x];
    //printf("array inicial: %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3]);
     if ((a->array[0] > a->array[1] && (a->array[1] > a->array[2]) && (a->array[2] > a->array[3])))
        return;
    while (x < a->max)
    {
    y = x + 1;
        if (a->array[y] < min)
        {
            min = a->array[y];
            position = y;    
        }
    x++;
    }
    if (position == 0)
        ft_reverse_rotate_a(a);
    else if (position == 1)
       ft_double_rotate_a(a);
    else if (position == 2)
    {
        ft_swap_a(a);
    }
    ft_push_b(a, b);
    ft_3_numbers(a);
    ft_push_a(a, b);
//    printf("array final: %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3]);
}

// Sacamos el número más bajo al stack b y luego
// ordenamos los 4 restantes con ft_4_numbers.
void    ft_5_numbers (t_stack *a, t_stack *b)
{
    int x;
    int y;
    int position;
    int min;
    
    x = 0;
    position = 0;
    min = a->array[x];
   //printf("array inicial: %d %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);
    while (x < a->max)
    {
    y = x + 1;
        if (a->array[y] < min)
        {
            min = a->array[y];
            position = y;    
        }
    x++;
    }
    if (position == 0)
        ft_reverse_rotate_a(a);
    else if (position == 1)
        ft_double_reverse_rotate_a(a);
    else if (position == 2)
        ft_double_rotate_a(a);
    else if (position == 3)
        ft_swap_a(a);
    ft_push_b(a, b);
    ft_4_numbers(a, b);
    ft_push_a(a, b);
//    printf("array final: %d %d %d %d %d\n", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);
}