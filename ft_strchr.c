/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 20:41:47 by sijang            #+#    #+#             */
/*   Updated: 2016/12/11 05:21:06 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p_s;

	i = 0;
	p_s = (char *)s;
	while (p_s[i])
	{
		if (p_s[i] == (char)c)
			return (&p_s[i]);
		i++;
	}
	if (p_s[i] == (char)c)
		return (&p_s[i]);
	return (0);
}
