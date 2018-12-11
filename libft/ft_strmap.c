/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:52:51 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 16:45:32 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*fresh;

	i = 0;
	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	if (fresh == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}

/*
** Similar to ft_striteri:
** Applies (*f) to (char ) and create "fresh" new string
** resulting from the successive applications of f.
*/
