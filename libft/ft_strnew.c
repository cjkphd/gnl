/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:09:05 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/30 13:11:39 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

/*
** ft_newstr -- allocates and returns a "fresh" memory area ending with '\0'
** Each "character" of the string is set to the value of '\0'
** If the allocation fails, the function returns NULL.
*/
