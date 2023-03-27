/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:58:28 by flauer            #+#    #+#             */
/*   Updated: 2023/03/27 11:46:02 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief iterate the list and apply function f to every nodes content
/// @param lst pointer to the first list node
/// @param f function applied to every nodes content
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr_elm;

	if (!f || !lst)
		return ;
	curr_elm = lst;
	while (curr_elm)
	{
		f(curr_elm->content);
		curr_elm = curr_elm->next;
	}
}
