/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:04:30 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:25:25 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!fresh)
		return (NULL);
	while (s[i] != '\0')
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}

/*
** Similar to strmap & striteri
*/
