/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:39:20 by njackson          #+#    #+#             */
/*   Updated: 2024/01/27 20:24:58 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		main(void)
{
	char	ft_dest[17];
	char	og_dest[17];

	printf("ft=%s\nog=%s\n",
		ft_strncpy(ft_dest, "Hello world :D", 15),
		strncpy(og_dest, "Hello world :D", 15));
	printf("ft=%s\nog=%s\n",
		ft_strncpy(ft_dest, "dlrow olleH", 13),
		strncpy(og_dest, "dlrow olleH", 13));
	write(1, "ft=", 3);
	write(1, ft_dest, 16);
	write(1, "\nog=", 4);
	write(1, og_dest, 16);
	write(1, "\n", 1);
}
*/
