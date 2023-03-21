/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:06:36 by flauer            #+#    #+#             */
/*   Updated: 2023/03/21 11:43:42 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_delimiter(char const *s, char c)
{
	size_t	ret;

	ret = 0;
	while (s[ret] && s[ret] != c)
		ret++;
	return (ret);
}

static size_t	ft_num_substr(char const *s, char c)
{
	size_t	num_substr;
	size_t	i;

	i = 0;
	num_substr = 0;
	if (s[i] && s[i] != c)
	{
		num_substr++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i+1] && s[i+1] != c)
			num_substr++;
		i++;
	}
	return (num_substr);
}

static const char	*ft_find_next_substr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (&s[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	num_substr;
	char	*curr_substr;
	size_t	curr_substr_len;

	i = -1;
	num_substr = ft_num_substr(s, c);
	curr_substr = (char *) ft_find_next_substr(s, c);
	ret = ft_calloc(num_substr + 1, sizeof(char *));
	if (!ret)
		return (ret);
	while (++i < num_substr)
	{
		curr_substr_len = ft_strlen_delimiter(curr_substr, c);
		if (curr_substr_len == 0)
			continue ;
		ret[i] = ft_substr(curr_substr, 0, curr_substr_len);
		if (!ret[i])
			return (NULL);
		curr_substr = (char *) ft_find_next_substr(curr_substr + curr_substr_len, c);
	}
	return (ret);
}
