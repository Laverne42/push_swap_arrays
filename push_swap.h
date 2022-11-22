/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:32:41 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/22 10:33:42 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>

typedef struct s_var
{
int *t_stack;
int size;
int position;
}			t_var;

// Gestión de errores
void	ft_exit(int code);

// Gestión de argumentos
int	*ft_fill_args(int argc, char **argv);

// Chequeos
int     ft_check_digits (char **argv);

#endif
