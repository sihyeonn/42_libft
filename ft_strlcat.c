/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:33:20 by sijang            #+#    #+#             */
/*   Updated: 2016/12/07 18:02:40 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	char	*p_src;

	p_src = (char *)src;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(p_src);
	if (!size || size - 1 < len_d)
		return (size + len_s);
	dst = ft_strncat(dst, src, size - 1 - len_d);
	return (len_d + len_s);
}
