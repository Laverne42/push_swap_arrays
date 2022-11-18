/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:00:38 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/18 12:35:00 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Relleno del array con los números recibidos por argumentos
char    **ft_fill_args(int argc, char **argv)
{

    char    *str;
    str = NULL;
    if (argc == 2)
        str = ft_split(argv[1], ' ');
    else
        str = &argv[1];
    return (str);
}

// Pasamos de char a int y almacenamos en un array
int ft_str_to_int(char *str)
{
    int *arr;
    int len;
    
    len = ft_strlen(str); 
    while (str[len])
    {
        arr = ft_atoi(str[len]);
        len --;
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

void ft_push_swap(t_var *v, int argc, char **argv)
{
    t_list  *stack_a;

    stack_a = NULL;
    v = ft_str_to_int(ft_fill_args(argc, argv));

}

int main(int argc, char **argv)
{
    t_var *v;

    v = NULL;
    if (argc < 2)
        ft_exit(1);
    else
        {
        }
    return (0);
}