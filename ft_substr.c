/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:10:41 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/25 18:38:41 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;
	size_t	len_max;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		len_max = 0;
	else if ((start + len) > slen)
		len_max = slen - start;
	else
		len_max = len;
	dst = malloc(len_max + 1);
	if (!dst)
		return (0);
	if (start < slen)
		ft_memcpy(dst, s + start, len_max);
	dst[len_max] = 0;
	return (dst);
}
