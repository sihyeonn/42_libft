/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 12:43:17 by sijang            #+#    #+#             */
/*   Updated: 2017/01/13 09:46:18 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# include <fcntl.h>
# define BUFF_SIZE 10

int		get_next_line(const int fd, char **line);
int		check_invalidation_fd_classify(t_line **head,\
		t_line **current, char **line, int fd);
int		check_nextline_before(t_line **current, char **line, char *buf);
int		check_last_nextlien(t_line **curent, char **line);
int		copy_check_nextline(t_line **current, char **buf, char **line, int re);
#endif
