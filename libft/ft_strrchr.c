/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:06:38 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:38:12 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief locate the last occurence of char c in string s
/// @param s input string
/// @param c character to look for (converted to char)
/// @return pointer to the last occurence of c in s
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) + 1;
	while (--len >= 0)
	{
		if (s[len] == (char) c)
			return ((char *)(s + len));
	}
	return (NULL);
}
