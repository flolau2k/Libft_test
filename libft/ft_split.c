/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:06:36 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 09:54:52 by flauer           ###   ########.fr       */
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
		if (s[i] == c && s[i +1] && s[i +1] != c)
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

static void	ft_free_str_arr(char **strarr)
{
	int	i;

	i = 0;
	while (strarr[i])
	{
		free(strarr[i]);
		i++;
	}
	free(strarr);
	strarr = NULL;
}

/// @brief split a string into substrings with a given delimiter
/// @param s string to split
/// @param c delimiter character
/// @return array of substrings
char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	num_substr;
	char	*curr_start;
	size_t	curr_len;

	i = -1;
	num_substr = ft_num_substr(s, c);
	curr_start = (char *) ft_find_next_substr(s, c);
	ret = ft_calloc(num_substr + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	while (++i < num_substr)
	{
		curr_len = ft_strlen_delimiter(curr_start, c);
		ret[i] = ft_substr(curr_start, 0, curr_len);
		if (!ret[i])
		{
			ft_free_str_arr(ret);
			return (NULL);
		}
		curr_start = (char *) ft_find_next_substr(curr_start + curr_len, c);
	}
	return (ret);
}
