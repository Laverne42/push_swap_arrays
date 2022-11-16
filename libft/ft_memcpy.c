/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:30:06 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/01 12:03:51 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			x;

	d = dst;
	s = (unsigned char *)src;
	x = 0;
	if (n == 0 || d == s)
		return (d);
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (d);
}
