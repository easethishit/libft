/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:54:58 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/16 18:20:44 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	sl;
	unsigned int	dl;
	unsigned int	i;

	i = 0;
	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dstsize == 0)
		return (sl);
	if (dstsize <= dl)
		return (dstsize + sl);
	while (dstsize && (dstsize - dl - 1) && src[i])
	{
		dst[dl + i] = src[i];
		i++;
		dstsize--;
	}
	dst[dl + i] = '\0';
	return (sl + dl);
}
