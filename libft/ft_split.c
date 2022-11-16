/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 08:37:08 by pmarquez          #+#    #+#             */
/*   Updated: 2022/11/04 08:45:13 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			w++;
		while (s[i] != c && s[i])
			i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	**p;

	x = 0;
	z = 0;
	p = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (s == NULL || p == NULL)
		return (NULL);
	while (z < count(s, c))
	{
		while (s[x] == c)
			x++;
		y = x;
		while (s[y] != c && s[y])
			y++;
		p[z] = ft_substr(s, x, (y - x));
		x = y;
		z++;
	}
	p[z] = 0;
	return (p);
}
