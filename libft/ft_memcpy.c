/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:09:13 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 13:52:17 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copies n bytes from src to dst. If src and dst overlap behaviour is
/// undefined. If that is the case use ft_memmove() instead.
/// @param dst pointer to destination buffer
/// @param src pointer to source buffer
/// @param n number of bytes to copy
/// @return the original value of dst
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	s1 = dst;
	s2 = src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
