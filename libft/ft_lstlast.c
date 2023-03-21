/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:38:35 by flauer            #+#    #+#             */
/*   Updated: 2023/03/21 18:41:18 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*curr_elm;

	i = 0;
	curr_elm = lst;
	while (curr_elm->next)
	{
		curr_elm = curr_elm->next;
		i++;
	}
	return (curr_elm);
}
