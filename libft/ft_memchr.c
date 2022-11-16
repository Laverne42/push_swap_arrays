/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:06:06 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/09 18:33:40 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*t;

	x = -1;
	t = (unsigned char *)s;
	while (++x < n)
	{
		if (t[x] == (unsigned char)c)
			return ((void *)&t[x]);
	}
	return (0);
}
