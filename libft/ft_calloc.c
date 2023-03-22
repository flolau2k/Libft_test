/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:38:36 by flauer            #+#    #+#             */
/*   Updated: 2023/03/22 17:48:47 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// make sure to handle size_t overflow.
void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	

	ret = malloc(count * size);
	if (ret)
		ft_bzero(ret, size * count);
	return (ret);
}
