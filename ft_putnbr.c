/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:17:02 by njackson          #+#    #+#             */
/*   Updated: 2024/02/09 14:04:14 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	signed char	sign;

	sign = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		sign = -1;
	}
	if (n >= 10 || n <= -10)
		ft_putnbr(n / (sign * 10));
	ft_putchar((sign * (n % 10)) + '0');
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
