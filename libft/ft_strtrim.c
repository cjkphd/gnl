/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:17:06 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:41:57 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		len;
	char	*str;
	char	*buf;
	int		begin;
	int		end;

	if (!s)
		return (ft_strnew(0));
	begin = 0;
	end = 0;
	len = ft_strlen(s);
	while (ft_whitespace(s[begin++]))
		;
	str = (char *)s + (ft_strlen(s) - 1);
	while (ft_whitespace(*str--))
		end++;
	buf = ft_strsub(s, begin - 1, (len - ((begin - 1) + (end))));
	return (--begin == len ? ft_strnew(0) : buf);
}

/*
** Allocates and returns copy of string w/o whitespaces at begin or end
** If s has no whitespaces, the function returns a copy of s.
** Fails returns NULL.
*/
