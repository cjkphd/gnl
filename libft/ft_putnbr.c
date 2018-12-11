/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:12:57 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/09 19:02:00 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n < 10)
		ft_putchar('0' + n);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + n % 10);
	}
}

/*
** ft_putnbr: factorial and recursively multiplies in a cascading down manner.
** '0' char + n % 10, to turn value into ASCII char
*/
