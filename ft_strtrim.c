/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 23:17:35 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/16 16:00:50 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;

	len = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (s1)
		len = ft_strlen(s1);
	while (*s1 && ft_strrchr(set, s1[len]) && len > 0)
		len--;
	str = ft_substr(s1, 0, (len + 1));
	return (str);
}
