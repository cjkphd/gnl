/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:10:36 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/09 18:28:38 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	unsigned int	i;
	long			sign;
	long			result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*
** Optional Conditions for Discarding Whitespaces:
** while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
** || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
**
** Long used because of 32 bits (-2^31 - 1 and 2^31-1)
*/
