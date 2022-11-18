/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:32:41 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/18 10:00:10 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>

typedef struct s_var
{
int *stack_array;
int size;
int position;
}			t_var;

// Gestión de errores
void	ft_exit(int code);

// Gestión de argumentos
char    **ft_fill_args(int *str, int argc, char **argv);

// Chequeos
int     ft_check_digits (char **argv);

#endif
