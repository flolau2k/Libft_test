/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:29:54 by flauer            #+#    #+#             */
/*   Updated: 2023/03/17 12:12:32 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		ilastchar;
	int		setlen;
	int		i;

	ret = (char *) s1;
	i = 0;
	setlen = ft_strlen(set);
	ilastchar = ft_strlen(ret) - 1;
	while (i < setlen)
	{
		if (ret[ilastchar] == set[i])
		{
			ret[ilastchar] = 0;
			return (ft_strtrim(ret, set));
		}
		if (ret[0] == set[i])
			return (ft_strtrim(ret + 1, set));
		i++;
	}
	return (ret);
}
