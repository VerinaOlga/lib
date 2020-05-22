/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 14:22:00 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/16 02:33:38 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	if (!*need)
		return ((char *)hay);
	while (*hay && len > 0)
	{
		if (*hay == *need)
			if (ft_memcmp(hay, need, ft_strlen(need)) == 0 && len >=
			ft_strlen(need))
				return ((char *)hay);
		hay++;
		len--;
	}
	return (NULL);
}
