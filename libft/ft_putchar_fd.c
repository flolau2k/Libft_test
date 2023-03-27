/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:48:24 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:57:31 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/// @brief output character to file descriptor. Uses write()
/// @param c character to output
/// @param fd file descriptor to output to
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
