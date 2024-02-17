/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:07:18 by njackson          #+#    #+#             */
/*   Updated: 2024/02/17 11:34:10 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f) (char *))
{
	while (*s)
	{
		f(s);
		s++;
	}
}

/*
//TESTING STUFF ***************************************************************

#include <stdio.h>

void	ft_isalpha_test(char *c)
{
	printf("Running with %c\n", *c);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	while (*(++argv))
	{
		ft_striter(*argv, &ft_isalpha_test);
	}
}
*/
