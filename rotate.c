/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:17:52 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/02 11:39:52 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rotate_a(t_stack *a)
{
printf("array inicial: %d%d%d%d%d\n", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);
int top_number;
int temp;
int temp2;
int x;
int y;

y = a->max;
x = 0;
temp2 = a->array[x];
top_number = a->array[a->max];
a->array[x] = top_number;
while (y > x)
    {
        temp = a->array[y];
        a->array[y] = a->array[y - 1];
        a->array[y - 1] = temp;
 
    y--;
    }
a->array[1] = temp2;
printf("Debería ser: 51234\n");
printf("array final: %d%d%d%d%d", a->array[0], a->array[1], a->array[2], a->array[3], a->array[4]);

}
