/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:24:42 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/20 00:53:07 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int i;

	i = 0;
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
