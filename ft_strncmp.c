/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:57:11 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/16 02:40:35 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[0] != '\0' && s2[0] != '\0' && n != 0)
		while (n > (i + 1) && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
			i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
