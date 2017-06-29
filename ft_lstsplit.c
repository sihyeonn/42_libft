/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:25:33 by sijang            #+#    #+#             */
/*   Updated: 2016/12/05 18:18:07 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsplit(char const *s, char c)
{
	t_list	*new;
	t_list	*tmp;
	t_list	*final;
	char	**sp;

	sp = ft_strsplit(s, c);
	new = ft_lstnew(*sp, ft_strlen(*sp) + 1);
	final = new;
	sp++;
	while (*sp && ((tmp = ft_lstnew(*sp, ft_strlen(*sp) + 1))))
	{
		new->next = tmp;
		new = new->next;
		sp++;
	}
	return (final);
}
