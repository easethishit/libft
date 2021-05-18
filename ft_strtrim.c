/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:05:44 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/18 18:35:43 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strstart(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

int	ft_strend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) -  1;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			return (i + 1);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	trimmedlen;
	char	*trimmed;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = ft_strstart(s1, set);
	end = ft_strend(s1, set);
	trimmedlen = (end - start + 1);
	if (start >= end)
		return (ft_strdup(""));
	trimmed = (char *)malloc((sizeof(char) * trimmedlen));
	if (!trimmed)
		return (0);
	ft_strlcpy(trimmed, &s1[start], trimmedlen);
	return (trimmed);
}
