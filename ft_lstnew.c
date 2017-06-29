/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 10:40:47 by sijang            #+#    #+#             */
/*   Updated: 2016/12/05 16:37:09 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	else if (!content || !content_size ||
			!(new->content = (void *)malloc(sizeof(content) * content_size)))
		new->content = NULL;
	else if (content_size)
		new->content = ft_memcpy(new->content, content, content_size);
	new->content_size = (!content) ? 0 : content_size;
	new->next = NULL;
	return (new);
}
