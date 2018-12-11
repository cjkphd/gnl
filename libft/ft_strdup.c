/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:09:53 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 12:55:36 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dupe;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dupe = (char *)malloc(sizeof(char) * (i + 1));
	if (!dupe)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dupe[i] = s1[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}

/*
** Saves a copy of a string in memory, and can be freed(3)
*/
