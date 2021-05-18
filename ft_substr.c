/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:10:41 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/11 18:10:54 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	slen;

	if (!s)
		return (0);
	dst = malloc(len + 1);
	if (!dst)
		return (0);
	i = 0;
	slen = ft_strlen(s);
	if (start < slen)
	{
		while (s[start + i] && i < len)
		{
			dst[i] = s[start + i];
			i++;
		}
	}
	dst[i] = 0;
	return (dst);
}
