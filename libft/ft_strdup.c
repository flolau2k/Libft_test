/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:32 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:01:01 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief creates a duplicate of the input string
/// @param s1 input string
/// @return pointer to the new string with the same contents
char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1) + 1;
	ret = ft_calloc(len, sizeof(char));
	if (ret)
		ft_strlcpy(ret, s1, len);
	return (ret);
}
