/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:04:41 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:21:34 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	s;
	size_t	d;
	size_t	i;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (d > n)
		return (n + s);
	while (src[i] != '\0' && d + i + 1 < n)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}

/*
** ft_strlcat copies the src string to dst and linking them together
** similar alternative to strcat (which adds a source string to dst buff).
** Ft_strlcat() both src and dst must be NUL-terminated
** and appends the NUL-terminated string src to the end of dst.
** It will add at most size strlen(dst) - 1 bytes, NUL-terminating the result.
*/
