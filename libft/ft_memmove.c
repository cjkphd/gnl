/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:37:46 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/09 18:52:57 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*from;
	char		*here;

	from = (const char *)src;
	here = (char *)dst;
	if (from < here)
	{
		from += len - 1;
		here += len - 1;
		while (len--)
		{
			*here-- = *from--;
		}
	}
	else
	{
		while (len--)
			*here++ = *from++;
	}
	return (dst);
}

/*
** basically copies len bytes from src to dst and can overlap each other.
** from += len - 1; means>> from = from + len - 1;
** *here-- means>> *here = *here - 1;
*/
