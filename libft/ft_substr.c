/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 08:37:08 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/09 17:30:08 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	y;
	unsigned int	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	y = 0;
	if (start > slen)
		return (ft_calloc(1, 1));
	if (len > slen)
		len = slen - start;
	p = (char *)ft_calloc(sizeof(*s), (len + 1));
	if (p == NULL)
		return (NULL);
	while (y < len && start < slen && s[start])
	{
		p[y] = s[start];
		start++;
		y++;
	}
	return (p);
}
