/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 16:56:38 by mamateo           #+#    #+#             */
/*   Updated: 2019/01/03 18:32:39 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_fd(char **str, int fd)
{
	int len;

	len = 0;
	while (str[fd][len] != '\n' && str[fd][len] != '0')
		len++;
	return (len);
}

/*
** len = ft_strlen_fd(s, fd);
*/
