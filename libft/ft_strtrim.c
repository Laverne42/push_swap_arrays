/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 08:37:08 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/09 18:50:27 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	char	*p;
	size_t	x;
	size_t	s1len;

	x = 0;
	s1len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (x < s1len && ft_strchr(set, s1[x]))
		x++;
	while (s1len > x && ft_strchr(set, s1[s1len - 1]))
		s1len--;
	p = ft_substr(&s1[x], 0, s1len - x);
	if (p == NULL)
		return (NULL);
	p[ft_strlen(p)] = '\0';
	return (p);
}
