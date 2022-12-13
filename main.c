/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:00:38 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/13 17:19:22 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Relleno del array con los números recibidos por argumentos.
// Si hay dos argumentos (números entre comillas), -> ft_split y atoi
// Si hay más de dos -> atoi
// En ambos casos los guardamos en orden inverso
// NOTA: REVISAR TABULACIONES EN ARGC == 2
int	*ft_fill_args(int argc, char **argv)
{
	int		*arr;
	char	**str;
	int		x;
    int     y;
	int		z;
	
	z = 0;
	y = 0;
	x = argc - 1;
	arr = NULL;
	str = ft_split(argv[1], ' ');
	while (str[y])
		y++;
	if (argc == 2 && y >= 1)
	{
    	arr = malloc(sizeof(int) * y);
		while (str[z] && z >= 0)
		{
			arr[z] = ft_atoi(str[y - 1]);
			y--;
			z++;
		}
	return (arr);
	}
	else if (argc > 2 || y == 1)
	{
		arr = malloc(sizeof(int) * x);
		while (argv[z] && x > 0)
		{
			arr[z] = ft_atoi(argv[x]);
		x--;
		z++;
		}
	}
    return (arr);
}

// Salida de error para utilizar cuando sea necesario
// en la gestión de errores de cada función.
void	ft_exit(int code)
{
	write(1, "Error\n", 6);
	exit(code);
}

void	ft_push_swap(t_stack *a, t_stack *b, int argc)
{
	if (argc > 0)
		ft_5_numbers(a, b);
	else
		write(1, "hola\n", 5);
}

// Creamos a y b en la estructura para los dos stacks.
// Rellenamos el stack a con la función ft_fill_args.
// Sacamos el valor máximo de a y de b (en el caso de b, 0);
// Una vez relleno 'a' con los ints, chequeamos que
// sean todos dígitos, que ningún numero se salga del
// rango de INT_MIN - INT_MAX, que no haya duplicados 
// y que la lista no esté ordenada directamente.
int	main(int argc, char **argv)
{
	t_stack		*b;
	t_stack		*a;
	int			x;
	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	if (a == NULL || b == NULL)
		return(0);
	x = 0;
	if (ft_check_int_max(argc, argv) == 1)
	{
		printf("Error INT_MAX\n");
		ft_exit(1);
	}
	a->array = malloc ((ft_args_options(argc, argv)) * sizeof(int));
	b->array = malloc ((argc - 1) * sizeof(int));
	if (a->array == NULL || b->array == NULL)
		return(0);
	a->array = ft_fill_args(argc, argv);
	a->max = ft_args_options(argc, argv) - 1;
	b->max = 0;
	if (ft_check_dup(a) == 1)
	{
		printf("Error dup\n");
		ft_exit(1);
	}
	if (ft_check_sort(a) == 1)
	{
		printf("Sorted\n");
		return (0);
	}
	ft_push_swap(a, b, argc);
	return (0);
}