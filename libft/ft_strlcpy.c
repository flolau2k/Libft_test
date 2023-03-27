/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:31 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:25:25 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copy string src to dst. Guaranteed NUL-termination, if there is
/// room. Note: space for NUL should be included in dstsize
/// @param dst destination buffer
/// @param src source string
/// @param dstsize total size of destination buffer
/// @return total length of the string that was tried to create. If 
/// the return value is >= dstsize the output string has been truncated. It 
/// is the callers responsibility to handle this.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
