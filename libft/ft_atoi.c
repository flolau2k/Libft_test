/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:53:40 by flauer            #+#    #+#             */
/*   Updated: 2023/03/20 16:53:38 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	char	str[2];

	str[0] = c;
	str[1] = '\0';
	if (ft_strnstr("\t\n\v\f\r ", str, 7))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	ret;
	int	i;
	int	sign;

	ret = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	return (ret * sign);
}
