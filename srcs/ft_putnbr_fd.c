/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:17:02 by njackson          #+#    #+#             */
/*   Updated: 2024/03/06 09:57:46 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	signed char	sign;

	sign = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		sign = -1;
	}
	if (n >= 10 || n <= -10)
		ft_putnbr(n / (sign * 10), fd);
	ft_putchar((sign * (n % 10)) + '0', fd);
}

/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	while (argc-- > 1)
	{
		argv++;
		ft_putnbr(atoi(*argv));
		ft_putchar('\n');
	}
}
*/
