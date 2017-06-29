/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lineadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 12:59:57 by sijang            #+#    #+#             */
/*   Updated: 2016/12/19 20:32:18 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lineadd(t_line **head, t_line *new)
{
	if (!new)
		return (0);
	if (!head)
		return (0);
	else if (*head)
		new->next = *head;
	*head = new;
	return (1);
}
