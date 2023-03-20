/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:34:58 by flauer            #+#    #+#             */
/*   Updated: 2023/03/20 14:05:55 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			out[10];
	int				i;
	unsigned int	nbr;

	i = 0;
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		write(fd, "-", 1);
	}
	if (n == 0)
		write(fd, "0", 1);
	while (nbr > 0)
	{
		out[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	while (i-- > 0)
	{
		write(fd, out + i, 1);
	}
}
