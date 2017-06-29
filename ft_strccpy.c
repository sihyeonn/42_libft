/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 17:44:05 by sijang            #+#    #+#             */
/*   Updated: 2016/12/11 08:06:23 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dst, char *src, char c)
{
	while (*src && *src != '\n')
	{
		if (*src != c)
		{
			if (*dst == c)
				*dst = *src;
			else if (*dst != c)
				return (NULL);
		}
		dst++;
		src++;
	}
	return (dst);
}
