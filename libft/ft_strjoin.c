/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 08:37:08 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/04 10:41:26 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	size_t	x;
	size_t	y;
	char	*p;

	x = 0;
	y = 0;
	p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (p == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		p[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		p[x] = s2[y];
		x++;
		y++;
	}
	p[x] = '\0';
	return (&p[0]);
}
