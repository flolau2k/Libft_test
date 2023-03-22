/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:01:59 by flauer            #+#    #+#             */
/*   Updated: 2023/03/22 17:28:27 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*ret;
// 	t_list	*curr_elm;

// 	if (!lst || !f)
// 		return (NULL);
// 	curr_elm = lst;
// 	ret = ft_lstnew(f(curr_elm->content));
// 	if (!ret)
// 		return (NULL);
// 	curr_elm = curr_elm->next;
// 	while (curr_elm)
// 	{
// 		ft_lstadd_back(&ret, f(curr_elm->content));
// 		curr_elm = curr_elm->next;
// 	}
// 	return (ret);
// }
