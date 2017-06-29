/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:06:09 by sijang            #+#    #+#             */
/*   Updated: 2016/12/19 17:21:58 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	unsigned char		*p_src;
	size_t				i;

	i = -1;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_dst < p_src)
	{
		while (++i < len)
			*(p_dst + i) = *(p_src + i);
	}
	else
	{
		while (len--)
			*(p_dst + len) = *(p_src + len);
	}
	return (dst);
}
