/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 18:04:52 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/15 18:12:13 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len = ft_strlen(s);
		while (len > 0 && s[len] != (char)c)
			len--;
	}
	return ((char)c == s[len] ? (char *)s + len : NULL);
}
