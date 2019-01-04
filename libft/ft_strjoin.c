/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:51:55 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/31 18:06:21 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (dst)
	{
		while (*s1)
		{
			*dst++ = *s1++;
		}
		while (*s2)
		{
			*dst++ = *s2++;
		}
		*dst = '\0';
		return (dst - (len1 + len2));
	}
	free(dst);
	return (dst);
}

/*
** Allocates and returns Fresh string ending with '\0'
** Return interconnecting of both strings
** Failing returns NULL:
** strlen of s1 & s2
** mallocs a memory size for dst
** strcpy s1 & s2
*/
