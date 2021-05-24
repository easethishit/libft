/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:39:20 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/18 18:37:36 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
	
int	word_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	const char	*start;
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	tab = malloc((word_count(s, c) + 1) * (sizeof(char *)));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			tab[i] = ft_substr(start, 0, (s - start));
			i++;
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

int	main()
{
	char *s = "esta frase tiene cinco palabras    ";
	char c = ' ';

	ft_split(s, c);
}
