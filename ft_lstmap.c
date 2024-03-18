/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:32:30 by njackson          #+#    #+#             */
/*   Updated: 2024/03/18 10:30:44 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	t_list	*outi;

	if (!lst || !f || !del)
		return (0);
	out = ft_lstnew(f(lst->content));
	if (!out)
		return (0);
	outi = out;
	lst = lst->next;
	while (lst)
	{
		outi->next = ft_lstnew(f(lst->content));
		if (!outi->next)
		{
			ft_lstclear(&out, del);
			return (0);
		}
		outi = outi->next;
		lst = lst->next;
	}
	return (out);
}
