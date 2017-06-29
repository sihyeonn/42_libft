/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 16:16:32 by sijang            #+#    #+#             */
/*   Updated: 2016/12/06 22:56:00 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*check_st(const char *big,
				const char *little, size_t len, char *save)
{
	size_t	i;
	char	*tmp;

	while (len--)
	{
		i = 0;
		if (*big == little[i])
		{
			tmp = &(*(char *)big);
			save = tmp;
			while (little[++i])
			{
				if (tmp[i] != little[i] || big + len < &tmp[i])
					break ;
			}
			if (!little[i])
				return (save);
		}
		big++;
		if (!*big)
			break ;
	}
	return (0);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*save;

	save = (char *)big;
	if (!little[0])
		return (save);
	return (check_st(big, little, len, save));
}
