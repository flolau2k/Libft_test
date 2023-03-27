/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:28:17 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 12:26:05 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief get the total length of string s
/// @param s string s
/// @return total length of s
size_t	ft_strlen(const char *s)
{
	size_t	ret;

	ret = 0;
	while (s[ret])
		ret++;
	return (ret);
}
