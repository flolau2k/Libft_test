/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:27:38 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:34:32 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief lexicographically compares the NUL-terminated strings s1 and s2.
/// not more than n characters are compared.
/// @param s1 first string
/// @param s2 second string
/// @param n number of characters to compare
/// @return returns 0 if both strings are equal, otherwise returns the
/// the difference between the first two different characters.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	len1;
	unsigned int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 < n)
		n = len1 + 1;
	if (len2 < n)
		n = len2 + 1;
	return (ft_memcmp(s1, s2, n));
}
