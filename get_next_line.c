/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 18:46:41 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/28 12:16:14 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** invokes the file from t_list struct,
** giving a size and creates a file description placement.
*/

static t_list		*get_file(t_list **file, int fd)
{
	t_list			*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(file, tmp);
	tmp = *file;
	return (tmp);
}

/*
** heart of the file, depending on the main, invokes **line,
** checks file for content,
** and returns a number -1, 0, or 1 for false, null, or true
*/

int					get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static t_list	*file;
	int				i;
	int				ret;
	t_list			*cur;

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	cur = get_file(&file, fd);
	Checker((*line = ft_strnew(1)));
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		Checker((cur->content = ft_strjoin(cur->content, buf)));
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(cur->content))
		return (0);
	i = ft_cpytill(line, cur->content, '\n');
	(i < (int)ft_strlen(cur->content))
		? cur->content += (i + 1)
		: ft_strclr(cur->content);
	return (1);
}
