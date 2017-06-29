/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:26:57 by sijang            #+#    #+#             */
/*   Updated: 2016/12/19 16:01:42 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*sc;

	len = ft_strlen(s1) + 1;
	if (!(sc = (char *)malloc(sizeof(char) * len)))
		return (0);
	while (len--)
		sc[len] = s1[len];
	return (sc);
}
