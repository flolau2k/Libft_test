/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:29:54 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:42:31 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(const char *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_wordlen(const char *s, const char *set)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && ft_isset(set, s[i - 1]))
		i--;
	return (i);
}

/// @brief create a copy of s1, with all characters in set removed from
/// the beginning and the end.
/// @param s1 input string
/// @param set set of characters to be removed
/// @return new trimmed string
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ret;

	i = 0;
	while (s1[i] && ft_isset(set, s1[i]))
		i++;
	ret = ft_substr(s1, i, ft_wordlen(s1 + i, set));
	return (ret);
}
