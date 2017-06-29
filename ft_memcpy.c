/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 22:06:48 by sijang            #+#    #+#             */
/*   Updated: 2016/12/06 23:00:21 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;

	p_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = p_src[i];
		i++;
	}
	return (dst);
}
