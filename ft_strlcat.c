/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:11:23 by njackson          #+#    #+#             */
/*   Updated: 2024/03/06 17:33:36 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	while (dst[dstlen])
		dstlen++;
	i = 0;
	while (dstlen + 1 < dstsize && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstsize)
		dst[dstlen + i] = '\0';
	while (src[i])
		i++;
	return (i);
}
