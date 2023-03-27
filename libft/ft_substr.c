/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:36:37 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:42:39 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/// @brief	allocates and returns a substring of a given string s,
///	starting at index start and of length len.
/// @param s original string
/// @param start start index for substring
/// @param len length of substring
/// @return	a pointer to the substring. Empty substr if start is out of range
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (strlen < start)
		return (ft_calloc(1, sizeof(char)));
	if (strlen - start < len)
		len = strlen - start;
	ret = malloc((len + 1) * sizeof(char));
	if (ret)
		ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
