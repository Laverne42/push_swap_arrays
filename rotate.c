/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:17:52 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/30 12:47:08 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rotate_a(t_stack *a)
{
    int x;
    int y;
    int z;
    int temp;

    x = 0;
    z = a->array[x];
 //   temp = a->array[y];
            printf("a->array[x]: %d\n", a->array[x]);
              printf("a->array[a->max]: %d\n", a->array[a->max]);
    a->array[x] = a->array[a->max];
    printf("a->array[x]: %d\n", a->array[x]);
    printf("a->array[a->max]: %d\n", a->array[a->max]);
    x = 1;
    y = x + 1;
    printf("posición 4: %d\n", a->array[4]);
    while (x <= a->max)
        {
            temp = a->array[y];
            a->array[y] = a->array[x];
            a->array[y + 1] = temp;
            x++;
            y++;
        }
 printf("posición 4: %d\n", a->array[4]);
 printf("array: %d%d%d%d", a->array[0], a->array[1], a->array[2], a->array[3]);



/* printf("a->max inicial: %d\n", a->array[a->max]);
printf("a->0 inicial: %d\n", a->array[0]);
printf("a->1 inicial: %d\n", a->array[1]);
    temp = a->array[0];
    printf("temp: %d\n", temp);
    a->array[0] = a->array[temp];
    a->array[a->max] = temp;
    while (a->array[x] < a->array[a->max])
    {
    z = a->array[x];
        a->array[y] = a->array[x];
        a->array[x] = z;
        x++;
        y++;
     //   z++;
    }
printf("a->max final: %d\n", a->array[a->max]);
printf("a->0 final: %d\n", a->array[0]);
printf("a->1 final: %d\n", a->array[1]); */
}
