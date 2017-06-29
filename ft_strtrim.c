/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 15:31:18 by sijang            #+#    #+#             */
/*   Updated: 2016/12/05 20:49:10 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t			i;
	unsigned int	start;

	start = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
		return (ft_strdup(""));
	start = (unsigned int)i;
	while (s[i])
		i++;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
		i--;
	return (ft_strsub(s, start, i - (size_t)start + 1));
}
