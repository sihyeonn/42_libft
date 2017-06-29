/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrtlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:10:26 by sijang            #+#    #+#             */
/*   Updated: 2016/12/08 20:21:52 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_arrtlst(void const **arr)
{
	t_list *new;
	t_list *tmp;
	t_list *final;

	if (!arr)
		return (0);
	new = ft_lstnew(*arr, ft_strlen((const char *)(*arr)) + 1);
	final = new;
	arr++;
	while (*arr && ((tmp = ft_lstnew(*arr,
						ft_strlen((const char *)(*arr)) + 1))))
	{
		new->next = tmp;
		new = new->next;
		arr++;
	}
	return (final);
}
