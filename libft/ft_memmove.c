/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:03:37 by flauer            #+#    #+#             */
/*   Updated: 2023/03/21 16:36:40 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*c_dst;
	const char		*c_src;

	if (dst == NULL && src == NULL)
		return (dst);
	if (len == 0 || (dst == src))
		return (dst);
	c_dst = dst;
	c_src = src;
	i = 0;
	if (c_src < c_dst)
	{
		while (len-- > 0)
			c_dst[len] = c_src[len];
	}
	else
	{
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (dst);
}
