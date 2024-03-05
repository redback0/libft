/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:18:48 by njackson          #+#    #+#             */
/*   Updated: 2024/01/27 14:59:37 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char ft_dest[12];
	char og_dest[12];
	printf("ft=%s\nog=%s\n",
		ft_strcpy(ft_dest, "Hello world"), 
		strcpy(og_dest, "Hello world"));
	printf("ft=%s\nog=%s\n",
		ft_strcpy(ft_dest, "goodbye"),
		strcpy(og_dest, "goodbye"));
	write(1, "ft=", 3);
	write(1, ft_dest, 11);
	write(1, "\nog=", 4);
	write(1, og_dest, 11);
	write(1, "\n", 1);
}
*/
