/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:37:16 by njackson          #+#    #+#             */
/*   Updated: 2024/02/17 11:53:07 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}

/*
// TESTING ********************************************************************

#include <stdio.h>

void	ft_striteri_testf(unsigned int i, char *s)
{
	printf("Running with %d, %c\n", i, *s);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	while (*(++argv))
	{
		ft_striteri(*argv, &ft_striteri_testf);
	}
}
*/
