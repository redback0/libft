/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:17:02 by njackson          #+#    #+#             */
/*   Updated: 2024/03/15 16:02:42 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchrdup(char	*str)
{
	(void)str;
	return (1);
}

int	ft_putnbr_base_fd(long long n, char *base, int fd)
{
	signed char	sign;
	long long	out_num;
	int			b;

	if (!ft_strchrdup(base))
		return (0);
	b = ft_strlen(base);
	ft_putnbr_fd(b, 1);
	sign = 1;
	out_num = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		out_num = 1;
		sign = -1;
	}
	if (n >= b || n <= -b)
		out_num += ft_putnbr_fd(n / (sign * b), fd);
	ft_putchar_fd((sign * base[n % b]), fd);
	return (out_num + 1);
}
