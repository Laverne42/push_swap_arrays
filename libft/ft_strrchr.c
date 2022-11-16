/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:06:06 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/14 09:06:57 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	int		slen;

	slen = ft_strlen(s);
	t = (char *)s;
	if ((char)c == 0)
		return (&t[slen]);
	while (slen >= 0)
	{
		if (t[slen] != (char)c)
			slen--;
		else if (t[slen] == (char)c)
			return (&t[slen]);
	}
	return (0);
}
