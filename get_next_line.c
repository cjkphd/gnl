/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 18:46:41 by mamateo           #+#    #+#             */
/*   Updated: 2019/01/03 18:33:07 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** get_file reads the fd/len of file
** len = ft_strlen_fd(s, fd);
*/

int				get_file(char **s, char **line, int fd, int ret)
{
	char		*poop;
	int			len;

	len = 0;
	while (s[fd][len] != '\n' && s[fd][len] != '\0')
		len++;
	if (s[fd][len] == '\n')
	{
		*line = ft_strsub(s[fd], 0, len);
		poop = ft_strdup(s[fd] + len + 1);
		free(s[fd]);
		s[fd] = poop;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (1);
}

/*
** heart of the file, depending on the main, invokes **line,
** fd limits: 4864
** and returns a number -1, 0, or 1 for false, null, or true
*/

int				get_next_line(const int fd, char **line)
{
	static char	*s[4864];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			food;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((food = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[food] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (food < 0)
		return (-1);
	else if (food == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (get_file(s, line, fd, food));
}
/*
** invokes the file from t_list struct,
** giving a size and creates a file description placement.
** static t_list		*get_file(t_list **file, int fd)
**{
**	t_list			*tmp;
**
**	tmp = *file;
**	while (tmp)
**	{
**		if ((int)tmp->content_size == fd)
**			return (tmp);
**		tmp = tmp->next;
**	}
**	tmp = ft_lstnew("\0", fd);
**	ft_lstadd(file, tmp);
**	tmp = *file;
**	return (tmp);
**}
*/
