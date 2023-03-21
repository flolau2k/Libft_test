/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:36:37 by flauer            #+#    #+#             */
/*   Updated: 2023/03/21 17:19:15 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	size_t			strlen;

	i = 0;
	strlen = ft_strlen(s);
	if (strlen < start) // return an empty string, if trying to get a substring out of range
		return (ft_calloc(1, sizeof(char)));
	if (strlen - start < len) // only copy what is there...
		len = strlen - start;
	ret = malloc((len + 1) * sizeof(char));
	if (ret)
	{
		s += start;
		while (i < len && s[i])
		{
			ret[i] = s[i];
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
