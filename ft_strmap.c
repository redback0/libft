/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:02:27 by njackson          #+#    #+#             */
/*   Updated: 2024/02/17 13:31:41 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char const *s);

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out;
	int		i;

	out = (char *) malloc(sizeof(char *) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i])
	{
		out[i] = f(s[i]);
		i++;
	}
	return (out);
}

/*
// TESTING ********************************************************************

#include <stdio.h>

int	ft_isalpha(char c);

char	ft_isalpha_test(char c)
{
	return ((char) (ft_isalpha(c) + '0'));
}

int	main(int argc, char * argv[])
{
	(void) argc;
	while (*(++argv))
		printf("%s\n%s\n", *argv, ft_strmap(*argv, &ft_isalpha_test));
}
*/
