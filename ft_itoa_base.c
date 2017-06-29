/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 20:11:08 by sijang            #+#    #+#             */
/*   Updated: 2016/12/08 21:56:17 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int value, int base)
{
	int		len;
	int		tmp;
	char	*ch;
	char	*nb;

	nb = ft_strdup("0123456789ABCDEF");
	if (value == 0 || 2 > base || base > 16)
		return (ft_strdup("0"));
	else if (base == 10)
		return (ft_itoa(value));
	len = 1;
	tmp = (value > 0) ? value : -value;
	value = tmp;
	while ((tmp > base - 1) && len++)
		tmp /= base;
	if ((ch = (char *)malloc(sizeof(char) * (len + 1))))
	{
		ch[len] = '\0';
		while (len-- && (ch[len] = nb[value % base]) && value)
			value /= base;
		return (ch);
	}
	return (0);
}
