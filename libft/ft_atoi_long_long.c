/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long_long.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:55:57 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/04 10:07:08 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long long	ft_atoi_long_long(char *str)
{
	int	x;
	int	n;
	int	neg;

	x = 0;
	n = 0;
	neg = 1;
	if (str[x] == '-')
		neg = -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while ((str[x] == 32) || (str[x] >= 9 && str[x] <= 13))
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		n = n * 10 + (str[x] - '0');
		x++;
	}
	return (n * neg);
}
