/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 08:37:08 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/03 10:18:57 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)

{
	size_t	x;
	size_t	y;
	char	*p;

	x = ft_strlen(s1);
	y = 0;
	if (s1 == NULL)
		return (0);
	p = malloc(x + 1);
	if (p == 0)
		return (0);
	while (x > 0)
	{
		p[y] = s1[y];
		y++;
		x--;
	}
	p[y] = '\0';
	return (p);
}
