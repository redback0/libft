/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:05:19 by njackson          #+#    #+#             */
/*   Updated: 2024/03/07 16:53:17 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// I want to try a different method of this at some point:
// dup string
// set all delimiters that occur in s to '\0'
// malloc area for required pointers
// set pointers to the locations required

char	**ft_split(char const *s, char c)
{
	char	**out;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	if (j < 1)
		return (0);
	out = (char **)malloc((j + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		k = 0;
		while (s[i + k] && s[i + k] != c)
			k++;
		if (k > 0)
		{
			out[j] = (char *)malloc((k + 1) * sizeof(char));
			ft_strlcpy(out[j++], s + i, k + 1);
		}
		i++;
	}
	return (out);
}
