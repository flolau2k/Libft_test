/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:36:41 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:37:34 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief returns the first occurence of NUL-terminated string needle 
/// in NUL-terminated string haystack, where not more than len characters
/// are searched. 
/// @param haystack string haystack
/// @param needle string needle
/// @param len length of haystack (number of characters to search)
/// @return pointer to the first occurence of needle in haystack. If needle
/// occurs nowhere in haystack, NULL is returned. If needle is an empty
/// string, haystack is returned.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len - i >= nlen)
	{
		if (ft_memcmp(haystack + i, needle, nlen) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
