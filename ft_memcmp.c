/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:53:54 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/15 23:16:24 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *str1;
	const char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (*str1 == *str2 && n - 1 > 0)
	{
		n--;
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
