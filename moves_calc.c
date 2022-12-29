/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:15:07 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/29 12:27:52 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// El coste en movimientos de poner cada número del stack b en el top
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
printf("Array moves b: %d\n", moves_b[x]);
x++;
}
return(moves_b);
}

// Coste de movimientos de a: por cada número de b, cuántos movimientos me cuesta poner en el top de a
// el inmediatamente superior al top de b. Luego, ídem con el siguiente número de b, etc.
/* int *ft_moves_a(t_stack *a, t_stack *b)
{

}
 */