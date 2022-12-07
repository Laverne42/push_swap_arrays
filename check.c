/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:58:20 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/07 12:47:57 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Función que detecta si los argumentos van
// con comillas o sin comillas y devuelve
// el número total de números que tendremos
// en el array en cualquiera de los dos casos.
int ft_args_options(int argc, char **argv)
{
    int x;
    if (argc == 2 && ft_size_split_counter(argv) > 1)
        x = ft_size_split_counter(argv);
    else
        x = argc - 2;
return(x);
}

// Contador para utilizar cuando el argumento
// vaya entre comillas y sacar el número
// total de números.
int ft_size_split_counter (char **argv)
{
   char **str;
   int y;

    y = 0;   
    str = ft_split(argv[1], ' ');
	while (str[y])
		y++;
    free(str);
return (y - 1);
}

// Chequeamos que cada argumento, al convertirlo
// en número, no se pase del INT_MIN ni del INT_MAX.
// Usamos una función atoi con long long.
int	ft_check_int_max(int argc, char **argv)
{
    int     x;
    int     y;
    long long    *arr;

    x = 0;
    y = 1;
    arr = malloc(sizeof(long long));
	while (argc > 1)
	{
       arr[x] = ft_atoi_long_long(argv[y]);
       if (arr[x] < INT_MIN || arr[x] > INT_MAX)
            return(1);
    x++;
    y++;
    argc--;
    }
    free(arr);
    return (0);
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
	{
    	x--;
    }
 	if (x == 0)
       	return(1);
return(0);
}

// Chequeamos si hay números repetidos en 'a',
// comparando la primera posición con la siguiente
// e incrementando esta si son diferentes.
// Si se detecta algún caso en que sean iguales,
// devolvemos 1 y salimos con ft_exit en el main.
int ft_check_dup(t_stack *a)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (a->array[y])
    {
        y = x+1;
        while (y <= a->max && a->array[x] != a->array[y])
            y++;
        if (a->array[x] == a->array[y])
            return(1);
    x++;
    }
return(0);
}
