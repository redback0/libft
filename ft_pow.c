/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:53:21 by njackson          #+#    #+#             */
/*   Updated: 2024/09/13 17:03:49 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// NOTE: I don't wanna bother implementing roots, so y must be positive or 0
int	ft_pow(int x, unsigned int y)
{
	int	out;

	out = 1;
	while (y > 0)
	{
		out *= x;
		y--;
	}
	return (out);
}
