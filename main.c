/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:00:38 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/24 10:37:11 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	n;
	int	neg;

	x = 0;
	n = 0;
	neg = 1;
	while ((str[x] == 32) || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
	{
		neg = -1;
		x++;
	}
	else if (str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9' && str[x] != '\0')
	{
		n = n * 10 + (str[x] - '0');
		x++;
	}
	return (n * neg);
}

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
	x = argc - 1;
    arr = malloc(sizeof(int) * x);
	if (argc == 2)
	{
        str = ft_split(argv[1], ' ');
		y = 0;
		while (str[y])
			y++;
		while (str[z])
		{
			arr[z] = ft_atoi(str[y - 1]);
			y--;
			z++;
		}
	}
	else if (argc > 2)
	{
		while (argv[z] && x > 0)
		{
			arr[z] = ft_atoi(argv[x]);
			printf("%d\n", arr[z]);
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

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	a->array = malloc ((argc -1) * sizeof(int));
	b->array = malloc ((argc - 1) * sizeof(int));
	if (a->array == NULL || b->array == NULL)
		return(0);
	a->array = ft_fill_args(argc, argv);
	a->max = argc - 2;
	b->max = 0;
	return (0);
}