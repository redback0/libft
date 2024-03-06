/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:18:48 by njackson          #+#    #+#             */
/*   Updated: 2024/03/06 12:13:14 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*out;

	len = ft_strlen(s) + 1;
	out = (char *)malloc(sizeof(char) * (len));
	(void)ft_strlcpy(out, s, len);
	return (out);
}
