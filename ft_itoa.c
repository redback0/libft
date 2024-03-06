/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:52 by njackson          #+#    #+#             */
/*   Updated: 2024/03/06 17:09:13 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	log_base_n(int n, int base)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*out;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	i = log_base_n(n, 10);
	if (n < 0)
	{
		out = (char *)malloc((++i + 1) * sizeof(char));
		out[0] = '-';
		out[i--] = '\0';
		out[i--] = -(n % 10) + '0';
		n /= -10;
	}
	else
	{
		out = (char *)malloc((i + 1) * sizeof(char));
		out[i--] = '\0';
	}
	while (n)
	{
		out[i--] = n % 10 + '0';
		n /= 10;
	}
	return (out);
}
