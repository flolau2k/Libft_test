/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:08:21 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:31:26 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief applies function f to each character of string s, creating a new
/// string from the result. s remains unchanged.
/// @param s input string
/// @param f pointer to function f
/// @return new string resulting from the successive applications of f
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	ret = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (ret)
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			ret[i] = f(i, s[i]);
			i++;
		}
	}
	return (ret);
}
