/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:53:11 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/15 23:27:28 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s)
		while (len > 0)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
	else
		while (len > 0)
		{
			*(d + len - 1) = *(s + len - 1);
			len--;
		}
	return (dst);
}
