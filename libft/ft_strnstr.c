/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:36:41 by flauer            #+#    #+#             */
/*   Updated: 2023/03/16 16:51:58 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		nlen;
	size_t	i;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char*)haystack);
	i = 0;
	while (i < (len - nlen))
	{
		if (ft_memcmp(haystack + i, needle, nlen) == 0)
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
