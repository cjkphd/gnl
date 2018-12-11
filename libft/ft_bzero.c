/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:26:37 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/10 11:30:44 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	i;

	if (n == 0)
		return ;
	temp = s;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

/*
** Writes 0 to a byte string
*/
