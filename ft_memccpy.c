/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:22:05 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/25 19:51:00 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sd;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)src;
	sd = (unsigned char *)dst;
	while (n--)
	{
		sd[i] = ss[i];
		if (ss[i] == (unsigned char)c)
			return (sd + i + 1);
		i++;
	}
	return (0);
}
