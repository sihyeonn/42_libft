/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intredu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:50:47 by sijang            #+#    #+#             */
/*   Updated: 2016/12/05 18:09:24 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intredu(int *arr, int size, int (*f)(int, int))
{
	int	result;
	int	i;

	i = 0;
	result = arr[i];
	while (i++ < size)
		result = f(result, arr[i]);
	return (result);
}
