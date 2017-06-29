/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_over.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 19:43:55 by sijang            #+#    #+#             */
/*   Updated: 2016/12/28 13:44:00 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup_over(const char *s1, int n)
{
	char	*sc;

	if (!s1)
		return (0);
	if (!n)
	{
		sc = (char *)malloc(sizeof(char) * 1);
		sc[0] = '\0';
	}
	else
	{
		if (!(sc = ft_strnew(n)))
			return (0);
		sc = ft_strncpy(sc, s1, (size_t)n);
		sc[n] = '\0';
	}
	return (sc);
}
