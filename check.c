/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:58:20 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/16 09:20:52 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Saltamos el posible signo inicial (+/-) si lo hay
// y recorremos cada posición comprobando si es un dígito.
int ft_check_digits(char **argv)
{
    int x;
    int y;

    x = 0;
    y = 0;
    if (!argv[0])
        ft_exit(1);
    if (argv[x][y] == '-' || argv[x[y] == '+'])
        y++;
    while (argv[x][y] != '\0')
    {
        if (ft_isdigit(argv[x][y]) == 1)
            y++;
        else if (ft_isdigit(argv[x][y]) == 0)
            ft_exit(1);
    }
    y++;
}

// Comprobación de si la lista está ordenada directamente.
int ft_check_sort()