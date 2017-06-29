/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 20:31:51 by sijang            #+#    #+#             */
/*   Updated: 2016/12/19 01:03:15 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!n)
		return (s1);
	while (s1[i])
		i++;
	while (j < n)
	{
		if (!s2[j])
		{
			s1[i + j] = '\0';
			return (s1);
		}
		else
			s1[i + j] = s2[j];
		j++;
	}
	s1[i + n] = '\0';
	return (s1);
}
