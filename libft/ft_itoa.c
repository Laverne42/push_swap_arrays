/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:00:50 by pmarquez          #+#    #+#             */
/*   Updated: 2022/05/12 13:23:45 by pmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count = 12;
	else if (n > -2147483648 && n < 0)
	{
		n = n * -1;
		count = 1;
	}
	while (n > 9)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_extract(int n, char *str)
{
	char	*p;
	int		count;
	int		y;

	y = 0;
	count = ft_count(n);
	p = str;
	if (p == NULL)
		return (NULL);
	if (n > -2147483648 && n < 0)
	{
		n = n * -1;
		y = 1;
	}
	while (count >= 0 && n > -2147483648 && n <= 2147483647)
	{
		p[count] = ((n % 10) + '0');
		n = n / 10;
		count--;
	}
	if (y == 1)
		p[0] = '-';
	p[ft_strlen(p)] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = ft_count(n);
	str = (char *)ft_calloc(sizeof(char), count + 2);
	if (n == -2147483648)
	{
		ft_extract(n + 1, str);
		str[ft_strlen(str) - 1] = '8';
		return (str);
	}
	else if (str == NULL)
		return (NULL);
	else if (n >= -2147483648 && n <= 2147483647)
		ft_extract(n, str);
	return (str);
}
