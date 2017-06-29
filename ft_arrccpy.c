/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:29:44 by sijang            #+#    #+#             */
/*   Updated: 2016/12/11 05:52:49 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrccpy(char **dst, char **src, char c)
{
	if (!src)
		return (dst);
	while (*src)
	{
		if (!(*dst = ft_strccpy(*dst, *src, c)))
			return (NULL);
		dst++;
		src++;
	}
	return (dst);
}
