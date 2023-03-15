/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:50:12 by flauer            #+#    #+#             */
/*   Updated: 2023/03/15 12:25:42 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dstlen;

	dstlen = ft_strlen(dst);
	i = 0;
	while ((i + dstlen) < (dstsize - 1))
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = 0;
	return (dstlen + ft_strlen(src));
}
