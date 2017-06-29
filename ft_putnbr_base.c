/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 20:29:32 by sijang            #+#    #+#             */
/*   Updated: 2016/12/08 21:02:05 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nbr, int base, char c)
{
	char	*nb;

	if (c == 'u')
		nb = ft_strdup("0123456789ABCDEF");
	else if (c == 'l')
		nb = ft_strdup("0123456789abcdef");
	if (base == 10)
		return (ft_putnbr(nbr));
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base, c);
	}
	else if (nbr < base)
		ft_putchar(nb[nbr]);
	else
	{
		ft_putnbr_base(nbr / base, base, c);
		ft_putchar(nb[nbr % base]);
	}
}
