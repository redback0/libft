/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:02:21 by njackson          #+#    #+#             */
/*   Updated: 2024/03/15 12:09:53 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *str, int fd)
{
	size_t	i;

	if (str)
	{
		i = ft_strlen(str);
		write(fd, str, i);
		return (i);
	}
	write(fd, "(null)", 6);
	return (6);
}
