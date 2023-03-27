/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:38:36 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:33:25 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief allocate count elements of size size and set every byte to 0
/// @param count number of elements in buffer
/// @param size size of each element in buffer
/// @return pointer to newly allocated buffer
void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	msize;

	msize = count * size;
	if (size && msize / size != count)
		return (NULL);
	ret = malloc(count * size);
	if (ret)
		ft_bzero(ret, size * count);
	return (ret);
}
