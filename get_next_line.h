/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 18:47:21 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/28 12:16:18 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <libft.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 42

# define Checker((x) if (!x) return (-1));

int		get_next_line(const int fd, char **line);
#endif
