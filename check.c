/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:58:20 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/28 11:04:28 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Saltamos el posible signo inicial (+/-) si lo hay
// y recorremos cada posición comprobando que sea un dígito.
// Si alguna posición no lo es, salimos con error.
int ft_check_digits(char **argv)
{
    int x;
    int y;

    x = 1;
    y = 0;
    if (!argv[0])
        ft_exit(1);
    while (argv[x])
    {
        if (argv[x][y] == '-' || argv[x][y] == '+')
            y++;
        if (ft_isdigit(argv[x][y]) == 0)
            ft_exit(1); 
        while (ft_isdigit(argv[x][y] == 1))
            y++;
    x++;
    y = 0;
    }
return(0);
}

// Comprobación de si la lista está ordenada directamente.
// Como el array lo rellenamos al revés con ft_fill_args,
// comprobamos que la última posición vaya siendo mayor que la
// anterior y vamos decrementando x. Si x llega a cero, 
// la lista está ordenada y salimos con "1".
int ft_check_sort(t_stack *a)
{
    int x;
     
    x = a->max;
	while (x >= 0 && a->array[x] < a->array[x-1])
		x--;
 	if (x == 0)
    	return(1);
return(0);
}

/* int ft_check_dup(t_stack *a)
{
    int x;

    x = 0;
    while (x)
} */
