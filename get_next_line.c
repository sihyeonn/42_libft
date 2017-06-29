/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 00:15:27 by sijang            #+#    #+#             */
/*   Updated: 2016/12/20 19:48:14 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		copy_check_nextline(t_line **current, char **buf, char **line, int re)
{
	char	*tmp;
	int		newlen;

	(*current)->check = 1;
	if ((0 < (newlen = ft_strclen(*buf, '\n'))) || (!newlen && **buf == '\n'))
	{
		if (*line)
			tmp = ft_strndup_over(*line, ft_strlen(*line) + newlen);
		else
			tmp = ft_strnew(re);
		*line = ft_strncat(tmp, *buf, newlen++);
		(*current)->save = ft_strsub(*buf, newlen, re - newlen);
		return (1);
	}
	else if (newlen < 0)
	{
		if (*line)
			tmp = ft_strndup_over(*line, ft_strlen(*line) + re);
		else
			tmp = ft_strnew(re);
		*line = ft_strncat(tmp, *buf, re);
	}
	return (0);
}

int		check_last_nextline(t_line **current, char **line)
{
	char	*tmp;
	int		len;

	if (!current || !line || !*line || !*current || !((*current)->save))
		return (0);
	if (*((*current)->save))
	{
		len = ft_strlen((*current)->save);
		if (*line)
			tmp = ft_strndup_over(*line, ft_strlen(*line) + len);
		else
			tmp = ft_strnew(len);
		*line = ft_strncat(tmp, (*current)->save, len);
		ft_strset(&((*current)->save), '\0');
		return (1);
	}
	else if (**line)
		return (1);
	return (0);
}

int		check_nextline_before(t_line **current, char **line, char *buf)
{
	int		newlen;
	int		nullen;
	char	*tmp;

	if (!current || !line)
		return (0);
	else if ((*current)->check && !*buf && **line)
		return (1);
	else if (!*current || !((*current)->save) || !*((*current)->save))
		return (0);
	newlen = ft_strclen((*current)->save, '\n');
	nullen = ft_strlen((*current)->save);
	if ((0 < newlen) || ((newlen == 0) && newlen != nullen))
	{
		*line = ft_strsub((*current)->save, 0, newlen);
		tmp = ft_strsub((*current)->save, newlen + 1, nullen);
		free((*current)->save);
		(*current)->save = tmp;
		return (1);
	}
	*line = ft_strdup((*current)->save);
	ft_strset(&((*current)->save), '\0');
	return (0);
}

int		check_invalidation_fd_classify(t_line **head,\
		t_line **current, char **line, int fd)
{
	if (fd < 0 || !line)
		return (1);
	if (!*head)
		*head = ft_linenew(fd, BUFF_SIZE);
	*current = *head;
	while (((*current)->fd != fd) && ((*current)->next))
		*current = (*current)->next;
	if ((*current)->fd != fd)
		if (ft_lineadd(head, ft_linenew(fd, BUFF_SIZE)))
			*current = *head;
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static t_line	*head;
	t_line			*current;
	char			*buf;
	int				ck;
	int				re;

	if (!line)
		return (-1);
	*line = ft_strnew(1);
	if (check_invalidation_fd_classify(&head, &current, line, fd))
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	if (check_nextline_before(&current, line, buf))
		return (1);
	while ((re = read(fd, buf, BUFF_SIZE)) > 0 && *buf)
		if (copy_check_nextline(&current, &buf, line, re))
			return (1);
	if (re == -1)
		return (re);
	ck = (!current->check) ? -1 : check_last_nextline(&current, line);
	return (ck);
}
