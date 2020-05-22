/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:53:38 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/16 00:01:32 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (n-- > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
