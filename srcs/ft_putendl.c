/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:27:55 by njackson          #+#    #+#             */
/*   Updated: 2024/02/09 18:33:41 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char const *s);
void	ft_putchar(char c);

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

/*
int	main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		argv++;
		ft_putendl(*argv);
	}
}
*/
