/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:21:37 by sijang            #+#    #+#             */
/*   Updated: 2016/12/19 22:22:00 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int n)
{
	char	*sc;

	if (!s1)
		return (0);
	if (!n)
		return (0);
	if (!(sc = ft_strnew(n)))
		return (0);
	sc = ft_strncpy(sc, s1, (size_t)n);
	sc[n] = '\0';
	return (sc);
}
