/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:26:19 by njackson          #+#    #+#             */
/*   Updated: 2024/02/20 22:09:33 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// I don't think I'm allowed this?
#include <libft.h>
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) str;
	while (n != 0)
		p[--n] = c;
	return (str);
}

/*
// TESTING ********************************************************************

#include <stdio.h>

char	*ft_strdup(char const *s);

int	main(void)
{
	char	*str;
	int		array[10];

	str = ft_strdup("Hello World!");
	array[7] = 1235;
	printf("%s\n%d\n", str, array[7]);
	ft_memset(str, '0', 12);
	ft_memset(array, 0, 10 * sizeof(int));
	printf("%s\n%d\n", str, array[7]);
}
*/
