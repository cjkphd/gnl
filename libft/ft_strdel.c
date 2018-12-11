/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:27:06 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/09 19:29:15 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as && *as)
		ft_memdel((void **)as);
}

/*
** Takes as a parameter the address of a string that need to be freed
** then sets its pointer to NULL
*/
