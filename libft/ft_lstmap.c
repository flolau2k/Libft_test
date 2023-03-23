/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:01:59 by flauer            #+#    #+#             */
/*   Updated: 2023/03/23 15:27:20 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*curr_elm_ret;

	if (!lst || !f || !del)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	if (!ret)
		return (NULL);
	curr_elm_ret = ret;
	while (lst->next)
	{
		lst = lst->next;
		curr_elm_ret->next = ft_lstnew(f(lst->content));
		if (!curr_elm_ret->next)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		curr_elm_ret = curr_elm_ret->next;
	}
	return (ret);
}
