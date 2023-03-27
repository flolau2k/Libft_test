/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:38:35 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:46:42 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief find the last element of the list
/// @param lst pointer to the list node to start from
/// @return returns a pointer to the last node in the list
t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*curr_elm;

	i = 0;
	if (!lst)
		return (lst);
	curr_elm = lst;
	while (curr_elm->next)
	{
		curr_elm = curr_elm->next;
		i++;
	}
	return (curr_elm);
}
