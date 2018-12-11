/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 23:56:57 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 11:50:33 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	char			*buf;
	char			*s;
	unsigned int	v;

	v = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		v = -v;
	}
	buf = (char *)malloc(sizeof(char) * (4));
	if (!buf)
		return (NULL);
	s = buf + sizeof(buf);
	*--s = '\0';
	while (v >= 10)
	{
		*--s = '0' + v % 10;
		v /= 10;
	}
	*--s = '0' + v;
	if (n < 0)
		*--s = '-';
	return (ft_strdup(s));
}
/*
** v == variable
** malloc used to create memory space--(4)
*/

#include <stdio.h>

int	main(void)
{
	printf("string: %s", ft_itoa(1234556));
	while (1) //infinite loop to keep program running so we can call "leaks" command
		;
	return(0);
}
