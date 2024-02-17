/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:33:57 by njackson          #+#    #+#             */
/*   Updated: 2024/02/17 13:57:35 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char const *s);

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

/*
// TESTING ********************************************************************

#include <stdio.h>

char	only_odd_index(unsigned int i, char c)
{
	if (i % 2)
		return (c);
	return ('_');
}

int	main(int argc, char *argv[])
{
	(void) argc;
	while (*(++argv))
	{
		printf("%s\n%s\n", *argv, ft_strmapi(*argv, &only_odd_index));
	}
}
*/
