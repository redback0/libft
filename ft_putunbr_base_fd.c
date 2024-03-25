/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:45:40 by njackson          #+#    #+#             */
/*   Updated: 2024/03/25 11:49:37 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * check for invalid base
 */
static int	ft_strchrdup(char	*str)
{
	(void)str;
	return (1);
}

int	ft_putunbr_base_fd(unsigned long long n, char *base, int fd)
{
	long long	out_num;
	int			b;

	if (!ft_strchrdup(base))
		return (0);
	b = ft_strlen(base);
	out_num = 0;
	if (n >= b)
		out_num += ft_putnbr_base_fd(n / b, base, fd);
	ft_putchar_fd((base[n % b]), fd);
	return (out_num + 1);
}
