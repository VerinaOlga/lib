/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:51:59 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/21 13:03:00 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptrb;

	ptrb = (unsigned char *)b;
	while (len != 0)
	{
		*ptrb = (unsigned char)c;
		ptrb++;
		len--;
	}
	return (b);
}
