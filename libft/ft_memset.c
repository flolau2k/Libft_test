/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:28:31 by flauer            #+#    #+#             */
/*   Updated: 2023/03/16 11:20:06 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (dst);
}
