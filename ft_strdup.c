/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:19:12 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/25 20:03:07 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sc;

	sc = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!sc)
		return (0);
	else
		ft_strcpy(sc, s1);
	return (sc);
}
