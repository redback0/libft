/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:15:14 by njackson          #+#    #+#             */
/*   Updated: 2024/02/17 13:32:11 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NOTE: I'm not sure if the parameter should be of type int, or of type char
// the manual contains int, but I feel it makes more sense for it to be char

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// tested in ft_strmap
