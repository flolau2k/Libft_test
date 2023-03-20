/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:06:36 by flauer            #+#    #+#             */
/*   Updated: 2023/03/20 11:56:01 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_delimiter(char const *s, char c)
{
	int	ret;

	ret = 0;
	while (s[ret] && s[ret] != c)
		ret++;
	return (ret);
}

static int	ft_num_substr(char const *s, char c)
{
	int		num_substr;
	int		i;

	i = 0;
	num_substr = 0;
	while (s[i])
	{
		if (s[i] == c)
			num_substr++;
		i++;
	}
	return (num_substr + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		num_substr;
	char	*curr_substr_ptr;
	int		curr_substr_len;

	i = 0;
	num_substr = ft_num_substr(s, c);
	curr_substr_ptr = (char *) s;
	ret = ft_calloc(num_substr, sizeof(char *));
	if (ret)
	{
		while (i < num_substr)
		{
			curr_substr_len = ft_strlen_delimiter(curr_substr_ptr, c);
			ret[i] = ft_calloc(curr_substr_len + 1, sizeof(char));
			ft_memcpy(ret[i], curr_substr_ptr, curr_substr_len);
			curr_substr_ptr += curr_substr_len + 1;
			i++;
		}
	}
	return (ret);
}
