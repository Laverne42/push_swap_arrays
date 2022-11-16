/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:06:06 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/09 17:43:20 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		x;
	char	*t;
	int		slen;

	slen = ft_strlen(s);
	t = (char *)s;
	x = 0;
	if ((char)c == 0)
		return (&t[slen]);
	while (t[x] != '\0')
	{
		if (t[x] != (char)c)
			x++;
		else if (t[x] == (char)c)
			return (&t[x]);
	}
	return (0);
}
