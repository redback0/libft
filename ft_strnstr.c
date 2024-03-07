/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:48:19 by njackson          #+#    #+#             */
/*   Updated: 2024/03/07 12:23:30 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ni;
	size_t	i;

	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		ni = 0;
		while ((haystack[i + ni] == needle[ni]
			&& i + ni < len && haystack[i + ni] != '\0')
			|| needle[ni] == '\0')
		{
			if (needle[ni] == '\0')
				return ((char *)haystack + i);
			ni++;
		}
		i++;
	}
	return (0);
}
