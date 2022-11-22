/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:00:38 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/22 12:13:12 by pmarquez         ###   ########.fr       */
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

// Relleno del array con los números recibidos por argumentos
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
	if (argc < 2)
		ft_exit(1);
	if (argc == 2)
	{
		//str = argv[1];
        str = ft_split(argv[1], ' ');
		y = 0;
		while (str[y])
		{
			y++;
		}
		while (str[y])
		{
			arr[y] = ft_atoi(str[z]);
				y--;
				z++;
		}
	}
	// Rellenamos un array de int con los números recibidos
	// por argumento en orden inverso. 
	else
	{
		while (argv[z])
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

/* void	ft_push_swap(t_var *v, int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = NULL;
	v = ft_fill_args(argc, argv);
}
 */
int	main(int argc, char **argv)
{
	/* t_var *v;

	v = NULL; */
    int     *arrargs;
    arrargs = ft_fill_args(argc, argv);
	return (0);
}