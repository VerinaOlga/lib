/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:24:20 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/20 00:53:07 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *node;

	if (lst && del)
	{
		while (*lst)
		{
			node = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(node, *del);
		}
	}
}
