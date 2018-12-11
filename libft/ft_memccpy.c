/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:56:07 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/09 18:40:30 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*here;
	const char	*from;

	here = dst;
	from = src;
	while (n-- > 0)
	{
		if ((*here++ = *from++) == (char)c)
			return (here);
	}
	return (NULL);
}

/*
** copies string until char is found
*/
