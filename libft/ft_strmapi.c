/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:08:21 by flauer            #+#    #+#             */
/*   Updated: 2023/03/20 16:16:24 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
