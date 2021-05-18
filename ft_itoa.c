/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:18:53 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/20 19:06:41 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int nb)
{
	char	*str;
	int	nl;
	long	n;
	
	n = nb;
	nl = ft_numlen(nb);
	str = (char *)malloc(sizeof(char) * (nl + 1));
	if (!str)
		return (0);
	str[nl] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)	
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		nl--;
		str[nl] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
