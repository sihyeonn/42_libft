/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 21:03:00 by sijang            #+#    #+#             */
/*   Updated: 2016/12/03 17:59:04 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	len;
	char	*tmp;

	tmp = (char *)big;
	if (!big[0] && !little[0])
		return (tmp);
	len = ft_strlen(big);
	tmp = ft_strnstr(big, little, len);
	return (tmp);
}
