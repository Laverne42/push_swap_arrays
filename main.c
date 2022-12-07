/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:00:38 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/07 12:07:02 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/////////// PENDIENTE: COMILLAS ARGV - ERROR DIGITS ///////////

// Relleno del array con los números recibidos por argumentos.
// Si hay dos argumentos (números entre comillas), -> ft_split y atoi
// Si hay más de dos, -> atoi
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

void	ft_push_swap(t_stack *a, int argc)
{
	if (argc > 0)
		ft_3_numbers(a);
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
		// proteger malloc
	b = malloc(sizeof(t_stack));
	x = 0;
	if (ft_check_int_max(argc, argv) == 1)
	{
		printf("Error INT_MAX\n");
		ft_exit(1);
	}
	// OJO -> Malloc de 'a' no siempre de argc - 1, si tiene un solo argumento entre comillas, fail.
	a->array = malloc ((argc - 1) * sizeof(int));
	b->array = malloc ((argc - 1) * sizeof(int));
	if (a->array == NULL || b->array == NULL)
		return(0);
	a->array = ft_fill_args(argc, argv);
	a->max = ft_size_of_array(a);
	printf("a->max con ft_size: %d\n", a->max);
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
	ft_push_swap(a, argc);
	return (0);
}