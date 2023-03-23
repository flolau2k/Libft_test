/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:38:36 by flauer            #+#    #+#             */
/*   Updated: 2023/03/23 10:37:59 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
