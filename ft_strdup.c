/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:19:12 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/20 17:43:32 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *sc;

	if (!(sc = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (0);
	if (sc)
		ft_strcpy(sc, s1);
	return (sc);
}
