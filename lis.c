/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:36:53 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/21 13:41:12 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

// Función para obtener la longitud de la subsecuencia ordenada más larga
int ft_lis_max(int *lis, t_stack *a)
{
    int x;
    int lis_max;
    
    x = 0;
    lis_max = lis[x];
    while (x < a->max)
    {
        if (lis[x] > lis_max)
            lis_max = lis[x];
    x++;     
    }
//printf("MAX LIS: %d\n", max);
return(lis_max);
}

// Función para sacar la secuencia más larga ya ordenada y almacenarla en un array lis_stack_a.
// Sacamos las posiciones del lis más alto en *lis y vamos decrementando para sacar
// todos los valores correctos en lis_stack_a.
int *ft_sequence(t_stack *a, int *lis)
{
    int x;
    int y;
    int lis_max;
    int *lis_stack_a;
    
    x = a->max;
    y = 0;
    lis_max = ft_lis_max(lis, a);
    lis_stack_a = malloc(sizeof(int) * lis_max);
    while(y < a->max && lis_max >= 0)
    {
        if(lis[y] == lis_max)
        {
            lis_stack_a[lis_max - 1] = a->array[y];
            lis_max--;
        }
    y++;
    }
   lis_max = ft_lis_max(lis, a);
x = 0;
while(x < a->max)
{
printf("Lis_stack_a: %d\n", lis_stack_a[x]);
x++;    
}
return(lis_stack_a);
}

// Con dos índices (x = 0 / y = 1) vamos recorriendo el array desde a->max hacia abajo.
// Comparamos el número con el siguiente. Si el primero es menor, se incrementa el lis,
// siempre que el lis de x sea menor que el lis de y + 1.
int    *ft_lis(t_stack *a)
{
    int *lis;
    int x;
    int y;
           
    x = a->max;
    lis = malloc(a->max * sizeof(int));
    if (!lis)
        return(0);
    while (x >= 0)
    {
        lis[x] = 1;
        y = a->max;
        while (y > x)
        {
            if (a->array[y] < a->array[x] && lis[x] < lis[y] + 1)
                lis[x] = lis[y] + 1;
            y--;
        }
        x--;
    }
 
 x = a->max;
    while(x >= 0)
    {
        printf("%d - lis:%d\n", a->array[x], lis[x]);
        x--;
    }
ft_sequence(a, lis);
return(lis);
}