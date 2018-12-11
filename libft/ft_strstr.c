/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:03:48 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:40:28 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*haystack;
	char	*needle;
	size_t	len;

	haystack = (char *)s1;
	needle = (char *)s2;
	len = ft_strlen(needle);
	if (len == 0)
		return (haystack);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return ((char *)NULL);
}

/*
** Returns a pointer to the first occurrence of str2 in str1,
** or a null pointer if str2 is not part of str1.
** The matching process does not include the terminating null-characters,
** but it stops there.
*/
