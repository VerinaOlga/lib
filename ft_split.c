/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 23:17:10 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/19 18:16:06 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip(char const *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

static int			wordlength(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int			wcount(char const *s, char c)
{
	int wcount;

	wcount = 0;
	s = skip(s, c);
	while (*s != '\0')
	{
		s = s + wordlength(s, c);
		s = skip(s, c);
		wcount++;
	}
	return (wcount);
}

char				**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	if (!s || !(array = malloc((wcount((char *)s, c) + 1) * (sizeof(char **)))))
		return (NULL);
	s = skip(s, c);
	while (*s != '\0')
	{
		if (!(array[i] = malloc(wordlength(s, c) + 1)))
		{
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		ft_strlcpy(array[i], s, wordlength(s, c) + 1);
		s = s + wordlength(s, c);
		s = skip(s, c);
		i++;
	}
	array[i] = 0;
	return (array);
}
