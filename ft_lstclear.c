/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:22:33 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/25 21:17:48 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*cp;
	t_list	*np;

	if (*lst)
	{
		cp = *lst;
		while (cp)
		{
			np = cp->next;
			ft_lstdelone(cp, (del));
			cp = np;
		}
		*lst = NULL;
	}
}
