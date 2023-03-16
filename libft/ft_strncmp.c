/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:27:38 by flauer            #+#    #+#             */
/*   Updated: 2023/03/16 09:43:21 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < (n - 1) && s1[i] == s2[i])
// 	{
// 		if (!s1[i])
// 			return (s1[i] - s2[i]);
// 		i++;
// 	}
// 	return (s1[i] - s2[i]);
// }

// len + 1 to also compare the zero terminator itself.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	len1;
	unsigned int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 < n)
		n = len1 + 1;
	if (len2 < n)
		n = len2 + 1;
	return (ft_memcmp(s1, s2, n));
}
