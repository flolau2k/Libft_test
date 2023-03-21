/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:32:45 by flauer            #+#    #+#             */
/*   Updated: 2023/03/21 18:34:45 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	ret;
	t_list	*curr_elm;

	ret = 0;
	curr_elm = lst;
	while (curr_elm->next)
	{
		curr_elm = curr_elm->next;
		ret++;
	}
	return (ret);
}
