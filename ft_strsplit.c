/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sijang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 17:56:59 by sijang            #+#    #+#             */
/*   Updated: 2016/12/05 17:55:49 by sijang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_words(char const *s, char c)
{
	size_t			n;

	n = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else if (*s != c)
		{
			n++;
			while (*(s++) != c)
			{
				if (!*s)
					break ;
			}
		}
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**sp;
	size_t			i;
	size_t			n;
	unsigned int	st;

	i = 0;
	n = 0;
	if (s && (sp = (char **)malloc(sizeof(char *) * (nb_words(s, c) + 1))))
	{
		sp[nb_words(s, c)] = NULL;
		while (s[i])
		{
			if ((s[i] != c) && (n < nb_words(s, c)))
			{
				st = (unsigned int)i++;
				while (s[i] != c && s[i])
					i++;
				sp[n++] = ft_strsub(s, st, i - (size_t)st);
			}
			i = (!s[i]) ? i : i + 1;
		}
		return (sp);
	}
	return (0);
}
