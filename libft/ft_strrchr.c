/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:25:21 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:37:24 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	const char	*found;
	const char	*a;

	c = (char)c;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	found = NULL;
	while ((a = ft_strchr(s, c)) != NULL)
	{
		found = a;
		s = a + 1;
	}
	return ((char *)found);
}

/*
** Find the characters within the string
*/
