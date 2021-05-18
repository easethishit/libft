/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:08:51 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/16 19:16:23 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	len;
	size_t	i;

	i = 0;
	len = count * size;
	if (!(dst = malloc(sizeof(char) * len)))
		return (0);
	while (len--)	
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
