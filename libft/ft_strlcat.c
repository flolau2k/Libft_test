/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:50:12 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:10:50 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief appends string src to the end of dst. it will append at most 
/// dstsize - strlen(dst) - 1 characters, NUL-terminating the result, unless
/// dstsize is 0 or the original dst string was longer than dstsize.
/// @param dst destination string
/// @param src source string
/// @param dstsize size of the dst buffer
/// @return the length of the string that was tried to create. If the return
/// value is >= dstsize, the output string has been truncated. It is the 
/// callers responsibility to handle this!
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dstlen;

	dstlen = ft_strlen(dst);
	if (dstlen > dstsize)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] && (i + dstlen + 1) < dstsize)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = 0;
	return (dstlen + ft_strlen(src));
}
