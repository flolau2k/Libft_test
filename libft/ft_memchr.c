/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:26:15 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:50:39 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief locate the first occurence of c in string s
/// @param s string to search
/// @param c value to look for (converted to unsigned char)
/// @param n number of bytes to search
/// @return pointer to first occurence of c in s or NULL if no such byte exists
/// within n bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
