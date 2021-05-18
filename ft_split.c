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

#include "libft.h"
	
int	n_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)		
		{
			words++;
			while (s[i] && s[i] != c && s[i + 1])
				i++;
		}
		i++;
	}	
	return (words);
}

void	word_malloc(char **tab ,char const *s, char c)
{
	int	i;
	int	w;
	int	len;

	i = 0;
	w = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		if ((s[i] == c && s[i + 1] != c) || !s[i])
		{
			tab[w++] = malloc(sizeof(char) * (len + 1));
			len = 0;
		}
		if (s[i])
			i++;
	}
}

void	writer(char **tab, char const *s, char c)
{
	int	i;
	int	w;
	int	l;

	i = 0;
	w = 0;
	l = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			tab[w][l++] = s[i++];
		if (s[i] == c || !s[i])
		{
			if (s[i + 1] != c || !s[i])
			{
				tab[w++][l] = '\0';
				l = 0;
			}
			if (s[i])
				i++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;

	if (!s)
		return (0);
	words = n_words(s, c);
	tab = NULL;
	tab = malloc(sizeof(char *) * words + 1);
	if (!tab)	
		return (0);
	word_malloc(tab, s, c);
	writer(tab, s, c);
	tab[words] = NULL;
	return (tab);
}
