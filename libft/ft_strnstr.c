/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:31:24 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/01 11:48:00 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	size_t	p;
	size_t	x;

	x = 0;
	p = 0;
	h = (char *)haystack;
	if (needle[x] == '\0')
		return (&h[x]);
	while (h[x] != '\0' && x < len)
	{
		p = 0;
		while (x < len && h[x] != '\0'
			&& needle[p] != '\0' && needle[p] == h[x])
		{
			x++;
			p++;
		}
		if (needle[p] == '\0')
			return (&h[x - p]);
		x = x - p + 1;
	}
	return (0);
}
