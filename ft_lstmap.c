/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:47:15 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/18 21:33:04 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*last;
	t_list	*content;

	newlist = NULL;
	last = NULL;
	while (lst)
	{
		content = ft_lstnew(f(lst->content));
		if (!content)
		{
			if (newlist)
				ft_lstclear(&newlist, del);
			return (NULL);
		}
		if (last)
			last->next = content;
		if (!newlist)
			newlist = content;
		last = content;
		lst = lst->next;
	}
	return (newlist);
}
