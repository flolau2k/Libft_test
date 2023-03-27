/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:40:02 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:52:28 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief compare two buffers in memory bytewise
/// @param s1 pointer to first buffer
/// @param s2 pointer to second buffer
/// @param n number of bytes to compare
/// @return returns 0 if both buffers are equal, otherwise returns difference
/// between the first two different bytes.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*b1;
	const unsigned char	*b2;

	i = 0;
	b1 = s1;
	b2 = s2;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (b1[i] != b2[i])
			break ;
		i++;
	}
	return (b1[i] - b2[i]);
}
