/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:34:29 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:41:28 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_pow(int exp)
{
	long int	ret;

	ret = 1;
	while (exp > 0)
	{
		ret *= 10;
		exp--;
	}
	return (ret);
}

static int	ft_get_num_digits(int n)
{
	int	ret;

	ret = 1;
	while (n / ft_pow(ret) != 0)
	{
		ret++;
	}
	return (ret);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

/// @brief create a string representation of a given integer input (base 10)
/// @param n input integer
/// @return pointer to the newly created string
char	*ft_itoa(int n)
{
	char	*ret;
	char	*digit_buf;
	int		i;
	int		num_digits;

	num_digits = ft_get_num_digits(n);
	i = num_digits;
	if (n < 0)
		num_digits += 1;
	ret = ft_calloc(num_digits + 1, sizeof(char));
	digit_buf = ret;
	if (ret)
	{
		if (n < 0)
		{
			ret[0] = '-';
			digit_buf = ret + 1;
		}
		while (--i >= 0)
		{
			digit_buf[i] = (ft_abs(n % 10)) + '0';
			n /= 10;
		}
	}
	return (ret);
}
