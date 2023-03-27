/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:41:32 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:44:02 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief add a new node to the end of the list
/// @param lst pointer to the list
/// @param new pointer to the new node
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elm;

	last_elm = ft_lstlast(*lst);
	if (!last_elm)
		*lst = new;
	else
		last_elm->next = new;
}
