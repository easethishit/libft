/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:06:17 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/25 21:02:24 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	int		negativo;

	i = 0;
	negativo = 1;
	while (*str == ' ' || *str == '\r' || *str == '\f'
		|| *str == '\v' || *str == '\n' || *str == '\t')
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			negativo *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
		if (i * negativo > 2147483647)
			return (-1);
		if (i * negativo < -2147483648)
			return (0);
	}
	return (i * negativo);
}
