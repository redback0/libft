/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:33:57 by njackson          #+#    #+#             */
/*   Updated: 2024/03/06 12:08:40 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;

	out = (char *) malloc(sizeof(char *) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	return (out);
}
