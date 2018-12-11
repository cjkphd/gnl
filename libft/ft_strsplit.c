/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:24:33 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/05 00:11:15 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	arraylen(char *str, char delim)
{
	int		strings;
	int		word;

	strings = 0;
	word = 0;
	while (*str)
	{
		if (*str != delim)
		{
			strings += (word) ? 0 : 1;
			word = 1;
		}
		if (*str == delim && word)
			word = 0;
		str++;
	}
	return (!strings) ? strings + word : strings;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**modoru;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s || !c)
		return (NULL);
	len = arraylen((char *)s, c);
	if (!(modoru = (char **)ft_memalloc(sizeof(char *) * (len + 1))))
		return (NULL);
	j = 0;
	while (len--)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] && s[i] != c)
			i++;
		modoru[j++] = ft_strsub(s, 0, i);
		while (*s != c && *s)
			s++;
	}
	modoru[j] = NULL;
	return (modoru);
}

/*
** modoru means: to come back in Japanese
** delimiter: a sequence of one or more chars use to separate: ie., " " , () {}
*/
