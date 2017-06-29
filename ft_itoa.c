/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 20:04:12 by sijang            #+#    #+#             */
/*   Updated: 2016/12/05 21:06:31 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ch;
	size_t	len;
	int		tmp;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = (n > 0) ? n : -n;
	len = (n > 0) ? 1 : 2;
	while (tmp > 9 && len++)
		tmp /= 10;
	if ((ch = (char *)malloc(sizeof(char) * (len + 1))))
	{
		ch[len] = '\0';
		tmp = (n > 0) ? n : -n;
		while (len-- && (ch[len] = tmp % 10 + '0') && tmp)
			tmp /= 10;
		ch[0] = (n > 0) ? ch[0] : '-';
		return (ch);
	}
	return (0);
}
