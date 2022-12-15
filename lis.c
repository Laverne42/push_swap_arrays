/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:36:53 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/14 11:35:53 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    ft_lis(t_stack *a, t_stack *b)
{
    int x;
    int y;
    int index;
    int **position; // almacenar la posición y el valor de sequence_max actual
    int sequence_max;
    
    x = 0;
    y = x + 1;
    sequence_max = 0;
    position = NULL;
    index = 0;
    while (a->array[x])
    {
        if (a->array[x] > a->array[y])
        {
            
        }
        else if (a->array[x] < a->array[y])
        {
       
        }
    x++;
    index++;
    }
    printf("position: %d\n", **position);
    printf("seq_max: %d\n", sequence_max);
    ft_push_b(a, b);
}
