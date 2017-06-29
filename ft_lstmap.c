/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:24:32 by sijang            #+#    #+#             */
/*   Updated: 2016/12/05 19:06:16 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*final;

	if (!lst)
		return (0);
	if ((new = f(ft_lstnew(lst->content, lst->content_size))))
	{
		final = new;
		lst = lst->next;
		while (lst)
		{
			if ((tmp = f(ft_lstnew(lst->content, lst->content_size))))
			{
				new->next = tmp;
				new = new->next;
			}
			lst = lst->next;
		}
		return (final);
	}
	return (0);
}
