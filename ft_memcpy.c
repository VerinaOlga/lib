/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:52:35 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/21 18:20:56 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}

int main (void)
{
	void *one = "hell";
	void *two = "word";
	size_t n = 4;

	printf("%s\n", ft_memcpy('hello', 'world', 3));
	return (0);
}