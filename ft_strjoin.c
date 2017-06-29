/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 00:28:48 by sijang            #+#    #+#             */
/*   Updated: 2016/12/04 15:30:34 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (0);
	len1 = (s1 != NULL) ? ft_strlen(s1) : 0;
	len2 = (s2 != NULL) ? ft_strlen(s2) : 0;
	join = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!join)
		return (0);
	if (!s1 && s2)
	{
		join = (char *)ft_memmove((void	*)join, (const void *)s2, len2);
		join[len2] = '\0';
	}
	else if (s1)
	{
		join = (char *)ft_memmove((void *)join, (const void *)s1, len1);
		join[len1] = '\0';
		if (s2)
			join = ft_strcat(join, s2);
	}
	return (join);
}
