/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:55:04 by sijang            #+#    #+#             */
/*   Updated: 2016/12/08 20:28:23 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	signal;
	int	nb;

	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	signal = 1;
	nb = 0;
	if (*str == '-' || *str == '+')
		signal = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str))
	{
		nb *= 10;
		nb += (*str - '0');
		str++;
	}
	nb = (signal == -1) ? signal * nb : nb;
	return (nb);
}
