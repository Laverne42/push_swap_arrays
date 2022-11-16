/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:25:38 by pmarquez          #+#    #+#             */
/*   Updated: 2022/04/27 11:51:30 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	y;
	size_t	x;
	char	*d;
	char	*s;

	d = dst;
	s = (char *)src;
	x = 0;
	y = 0;
	while (s[y] != '\0')
		y++;
	if (size == 0)
		return (y);
	else if (size > x)
	{
		while (s[x] != '\0' && x < size - 1)
		{
			d[x] = s[x];
			x++;
		}
		d[x] = '\0';
	}
	return (y);
}
