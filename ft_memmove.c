/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:39:28 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/12 21:18:18 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ss;
	char	*sd;

	ss = (char *)src;
	sd = (char *)dst;
	if (ss < sd)
		while (len--)
			sd[len] = ss[len];
	else
		ft_memcpy(sd, ss, len);
	return (dst);
}
