/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 21:21:42 by sijang            #+#    #+#             */
/*   Updated: 2016/12/19 20:32:51 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = -1;
	if (!size)
		return (0);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	while (++i < size + 1)
		str[i] = 0;
	return (str);
}
