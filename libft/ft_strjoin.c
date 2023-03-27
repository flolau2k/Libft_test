/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:44:18 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:04:08 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief allocates a new buffer and returns a new string, which is
/// the result of the concatenation 
/// @param s1 first string
/// @param s2 second string
/// @return new string with the concatenated strings s1 and s2
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	ret = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcat(ret, s1, ft_strlen(s1) + 1);
	ft_strlcat(ret + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (ret);
}
