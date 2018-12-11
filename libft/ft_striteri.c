/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:51:13 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 14:55:04 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	j;

	j = 0;
	if (s && f)
	{
		while (j < ft_strlen(s))
		{
			(*f)(j, &s[j]);
			j++;
		}
	}
}

/*
** The (*f) is applied to each (char *) of the string being passed as an arg.
** Same as ft_striter, except (*f) have same params as (unsigned int, char*)
** Each character passed by address to F, which can be modified when necessary.
*/
