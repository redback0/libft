/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:33:34 by njackson          #+#    #+#             */
/*   Updated: 2024/03/08 10:21:00 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			j++;
		i++;
	}
	if (j < 1)
		return (0);
	out = (char *)malloc((j + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			out[j++] = s1[i];
		i++;
	}
	return (out);
}
