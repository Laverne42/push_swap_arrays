/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:00:38 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/20 12:24:33 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Relleno del array con los números recibidos por argumentos.
// Si hay dos argumentos (números entre comillas), -> ft_split y atoi
// Si hay más de dos -> atoi
// En ambos casos los guardamos en orden inverso
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
		if (arr == NULL)
			return(0);
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
		if (arr == NULL)
			return(0);
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
// El error va por STDERR (write -> 2)
void	ft_exit()
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_push_swap(t_stack *a, t_stack *b, int argc, char **argv)
{
//printf("args_options: %d\n", ft_args_options(argc, argv));
	if (ft_args_options(argc, argv) == 2)
		ft_2_numbers(a);
	else if (ft_args_options(argc, argv) == 3)
		ft_3_numbers(a);
	else if (ft_args_options(argc, argv) == 4)
		ft_4_numbers(a, b);
	else if (ft_args_options(argc, argv) == 5)
		ft_5_numbers(a, b);
	// else ft_lis 
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
		ft_exit(1);
	a->array = malloc ((ft_args_options(argc, argv)) * sizeof(int));
	b->array = malloc ((argc - 1) * sizeof(int));
	if (a->array == NULL || b->array == NULL)
		return(0);
	a->array = ft_fill_args(argc, argv);
	a->max = ft_args_options(argc, argv) - 1;
	b->max = -1;
	if (ft_check_dup(a) == 1)
	{
		ft_exit(1);
	}
	if (ft_check_sort(a) == 1)
	{
		return (0);
	}
	///ft_lis(a);
	ft_push_swap(a, b, argc, argv);
	return (0);
}