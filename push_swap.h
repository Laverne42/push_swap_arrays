/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:32:41 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/07 11:48:21 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <limits.h>

// Estructura
typedef struct s_stack
{
int *array;
int max;
int position;
}			t_stack;

// Gestión de errores
void	ft_exit(int code);

// Gestión de argumentos
int	*ft_fill_args(int argc, char **argv);

// Chequeos
int     ft_check_sort(t_stack *a);
int     ft_check_dup(t_stack *a);
int     ft_check_int_max(int argc, char **argv);

// Movimientos
void    ft_swap_a(t_stack *a);
void    ft_swap_b(t_stack *b);
void    ft_swap_a_b(t_stack *a, t_stack *b);
void    ft_rotate_a(t_stack *a);
void    ft_rotate_b(t_stack *b);
void    ft_rotate_a_b(t_stack *a, t_stack *b);
void    ft_push_a(t_stack *a, t_stack *b);
void    ft_push_b(t_stack *a, t_stack *b);
void    ft_reverse_rotate_a(t_stack *a);
void    ft_reverse_rotate_b(t_stack *b);
void    ft_reverse_rotate_a_b(t_stack *a, t_stack *b);
void    ft_swap_a_rotate_a (t_stack *a);
void    ft_swap_a_reverse_rotate_a (t_stack *a);

// Casos
void    ft_3_numbers (t_stack *a);

// Utilidades
void	ft_push_swap(t_stack *a, int argc);
int     ft_size_of_array (t_stack *a);

#endif
