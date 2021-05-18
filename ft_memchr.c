/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:04:18 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/20 19:58:42 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	const char *sc;
	char cc;

	cc = c;
	sc = s;
	i = 0;
	while (n--)
	{
		if (sc[i] == cc)	
			return ((void *)sc + i);
		i++;
	}
	return (0);
}
