/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:31:24 by pmarquez          #+#    #+#             */
/*   Updated: 2022/04/28 15:18:43 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*y;
	unsigned char	*z;

	y = (unsigned char *)s1;
	z = (unsigned char *)s2;
	x = 0;
	if (n == 0)
		return (0);
	while (((y[x] != '\0') || (z[x] != '\0')) && (x < n))
	{
		if (y[x] < z[x])
			return (-1);
		else if (y[x] > z[x])
			return (1);
		x++;
	}
	return (0);
}
