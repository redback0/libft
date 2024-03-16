/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:17:02 by njackson          #+#    #+#             */
/*   Updated: 2024/03/16 21:55:57 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(long long n, int fd)
{
	signed char	sign;
	long long	out_num;

	sign = 1;
	out_num = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		out_num = 1;
		sign = -1;
	}
	if (n >= 10 || n <= -10)
		out_num += ft_putnbr_fd(n / (sign * 10), fd);
	ft_putchar_fd((sign * (n % 10)) + '0', fd);
	return (out_num + 1);
}
