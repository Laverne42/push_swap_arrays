/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 08:37:08 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/09 17:05:09 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*p;

	if (count == __SIZE_MAX__ && size > 1)
		return (NULL);
	else if (size == __SIZE_MAX__ && count > 1)
		return (NULL);
	p = (void *)malloc(size * count);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, size * count);
	return (p);
}
