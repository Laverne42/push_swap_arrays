/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:40:31 by pmarquez          #+#    #+#             */
/*   Updated: 2022/10/24 08:21:25 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	x;

	x = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[x] || s2[x])
	{
		if (s1[x] == s2[x])
			x++;
		else
		{
			if (s1[x] > s2[x])
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}
