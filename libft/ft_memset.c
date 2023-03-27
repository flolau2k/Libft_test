/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:28:31 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:28:33 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief set all bytes in buffer to the same value
/// @param b pointer to the first byte of the buffer
/// @param c value to set
/// @param len length of buffer
/// @return pointer to the buffer
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	unsigned int	i;

	i = 0;
	dst = b;
	while (i < len)
	{
		dst[i] = c;
		i++;
	}
	return (b);
}
