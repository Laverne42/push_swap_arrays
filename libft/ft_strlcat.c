/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:26:29 by pmarquez          #+#    #+#             */
/*   Updated: 2022/04/28 08:44:18 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	slen;
	size_t	dlen;

	x = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize < dlen + 1)
		return (slen + dstsize);
	if (dstsize > dlen + 1)
	{
		while (src[x] != '\0' && dlen + x + 1 < dstsize)
		{
			dst[x + dlen] = src[x];
			x++;
		}
		dst[dlen + x] = '\0';
	}
	return (slen + dlen);
}
