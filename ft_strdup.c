/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:18:48 by njackson          #+#    #+#             */
/*   Updated: 2024/02/09 15:50:55 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(const char *s)
{
	int		len;
	char	*out;

	len = ft_strlen(s);
	out = (char *) malloc(sizeof(char) * (len + 1));
	return (ft_strcpy(out, s));
}

/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*ogdup;
	char	*ftdup;

	while(argc-- > 1)
	{
		ogdup = strdup(*(++argv));
		ftdup = ft_strdup(*argv);
		printf("og: %ld %s\n", strlen(ogdup), ogdup);
		printf("ft: %ld %s\n", strlen(ftdup), ftdup);
		free(ogdup);
		free(ftdup);
	}
}
*/
