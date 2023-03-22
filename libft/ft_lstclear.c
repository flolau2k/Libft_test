/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:47:12 by flauer            #+#    #+#             */
/*   Updated: 2023/03/22 17:44:15 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr_elm;
	t_list	*next_elm;

	if (!lst || !del || !*lst)
		return ;
	curr_elm = *lst;
	while (curr_elm)
	{
		next_elm = curr_elm->next;
		ft_lstdelone(curr_elm, del);
		curr_elm = next_elm;
	}
	*lst = NULL;
}
