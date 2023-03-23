/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:58:28 by flauer            #+#    #+#             */
/*   Updated: 2023/03/22 19:29:25 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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