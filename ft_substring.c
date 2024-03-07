/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:40:26 by njackson          #+#    #+#             */
/*   Updated: 2024/03/07 14:13:47 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len <= start || len < 1)
		return (0);
	if (s_len - start + 1 < len)
		len = s_len - start + 1;
	out = (char *)malloc((len + 1) * sizeof(char));
	out[len] = '\0';
	while (len-- > 0)
		out[len] = s[start + len];
	return (out);
}
