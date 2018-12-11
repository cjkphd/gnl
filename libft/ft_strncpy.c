/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:53:07 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:35:15 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*poop;

	poop = dst;
	while (len--)
		if ((*dst++ = *src++) == '\0')
		{
			while (len--)
				*dst++ = '\0';
			return (poop);
		}
	return (poop);
}

/*
** Copies at most len from src into dst.
** If src < len, remainder of dst is '\0'
** otherwise ;
*/
