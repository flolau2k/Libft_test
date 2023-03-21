/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:28:31 by flauer            #+#    #+#             */
/*   Updated: 2023/03/21 08:39:48 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	unsigned int	i;

	if (b == NULL)
		return (b);
	i = 0;
	dst = b;
	while (i < len)
	{
		dst[i] = c;
		i++;
	}
	return (b);
}
