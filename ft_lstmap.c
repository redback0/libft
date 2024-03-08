/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:32:30 by njackson          #+#    #+#             */
/*   Updated: 2024/03/08 15:53:20 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	t_list	*outi;

	out = ft_lstnew(f(lst->content));
	outi = out;
	while (lst)
	{
		outi->next = ft_lstnew(f(lst->content));
		outi = outi->next;
		lst = lst->next;
	}
	outi = out->next;
	del(out->content);
	free(out);
	return (outi);
}
