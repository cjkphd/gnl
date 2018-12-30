/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 12:52:47 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/30 13:20:34 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoinch(const char *s1, char c)
{
	char	*ns;
	size_t	i;
	size_t	sl;

	if (!s1 || !c)
		return (NULL);
	sl = ft_strlen(s1);
	ns = ft_strnew(sl + 1);
	if (!ns)
		return (NULL);
	i = -1;
	while (++i < sl)
		*(ns + i) = *(s1 + i);
	*(ns + i) = c;
	return (ns);
}
/*
** if->ns(newstr) is allocated a space on the length of s1 + 1
** while->starting from end of i, ++ to the len of s1, and similar to strcpy
*/
