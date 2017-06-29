/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 12:49:33 by sijang            #+#    #+#             */
/*   Updated: 2016/12/19 21:32:57 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_line	*ft_linenew(int fd, int size)
{
	t_line	*new;

	new = (t_line *)malloc(sizeof(t_line));
	if (!new)
		return (0);
	if (!(new->save = (char *)malloc(sizeof(new->save) * (size + 1))))
		return (0);
	ft_strset(&(new->save), '\0');
	new->fd = fd;
	new->check = 0;
	new->next = NULL;
	return (new);
}
