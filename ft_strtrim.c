/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:33:34 by njackson          #+#    #+#             */
/*   Updated: 2024/03/09 13:05:41 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	i;
	size_t	j;

	j = ft_strlen(s1);
	while (ft_strchr(set, s1[--j]))
		;
	i = 0;
	while (ft_strchr(set, s1[i++]))
		j--;
	out = (char *)malloc((j + 2) * sizeof(char));
	ft_strlcpy(out, s1 + i - 1, j + 2);
	return (out);
}
