/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:27:55 by njackson          #+#    #+#             */
/*   Updated: 2024/03/06 09:56:38 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);

void	ft_putendl(char const *s, int fd)
{
	ft_putstr(s, fd);
	ft_putchar('\n', fd);
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
