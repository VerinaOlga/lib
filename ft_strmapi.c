/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 03:07:41 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/16 15:33:42 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*string;
	int		i;

	i = 0;
	if (!s || !(string = ft_calloc((ft_strlen(s) + 1), sizeof(char))))
		return (NULL);
	while (s[i])
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	return (string);
}
