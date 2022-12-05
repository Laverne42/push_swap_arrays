/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:52:36 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/05 12:06:17 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_case_3 (t_stack *a)
{
    int x;

    x = 0;
    printf("array: %d %d %d\n", a->array[0], a->array[1], a->array[2]);
        if (a->array[0] > a->array[1])
            if (a->array[1] < a->array[2])
            {
                ft_swap_a(a);
                write (1, "sa\n", 3);
            }

printf("array ordenado: %d %d %d\n", a->array[0], a->array[1], a->array[2]);
}