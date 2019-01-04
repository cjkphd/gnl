/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:48:49 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/31 16:39:10 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*a;

	a = malloc(size);
	if (!a)
		return (NULL);
	ft_bzero(a, size);
	return (a);
}

/*
** allocates and returns a "fresh" memory area
** memory allocated is initialize to 0
** if allocation fails, returns NULL
** bzero - writes 0 to a byte string
*/
