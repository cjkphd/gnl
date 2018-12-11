/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:32:31 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:36:58 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*needle;
	size_t	l;

	needle = (char *)s2;
	l = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)s1);
	while (*s1 && len-- >= l)
	{
		if ((*s1 == *needle) && (ft_strncmp(s1, needle, l) == 0))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

/*
** Finds a string within a string
*/
