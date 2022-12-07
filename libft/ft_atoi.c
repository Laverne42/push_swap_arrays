/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:50:57 by pmarquez          #+#    #+#             */
/*   Updated: 2022/12/07 11:21:42 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

// Salida de error para el atoi
void	ft_exit_atoi(int code)
{
	write(1, "Error\n", 6);
	exit(code);
}

// Atoi modificado para que también
// vaya comprobando antes de rellenar
// que todo son dígitos
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
	while (str[x])
	{
		if (str[x] >= '0' && str[x] <= '9')
			n = n * 10 + (str[x] - '0');
		else
		{
		write(1, "Error digits\n", 13);
		ft_exit_atoi(1);
		}
	x++;
	}
	return (n * neg);
}
