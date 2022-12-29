/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:15:07 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/29 11:45:40 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_moves_b(t_stack *b)
{
    int x;
    int *moves_b;

    x = 0;
    moves_b = malloc(sizeof(int) * b->max);
    while (x < b->max)
    {
        moves_b[x] = x;
        x++;
    }
return(moves_b);
}

