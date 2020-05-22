/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:55:00 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/16 03:02:51 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	result;
	int		i;

	result = 0;
	dstlen = 0;
	srclen = 0;
	i = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (dst[dstlen] != '\0')
		dstlen++;
	if (dstlen >= dstsize)
		result = srclen + dstsize;
	else
		result = srclen + dstlen;
	while (src[i] != '\0' && ((dstlen + 1) < dstsize))
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (result);
}
