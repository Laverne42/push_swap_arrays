/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:06:06 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/01 13:19:37 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*char1;
	unsigned char	*char2;

	char1 = (unsigned char *)s1;
	char2 = (unsigned char *)s2;
	x = 0;
	if (n == 0)
		return (0);
	while (x < n)
	{
		if (char1[x] != char2[x])
			return (char1[x] - char2[x]);
		x++;
	}
	return (0);
}
